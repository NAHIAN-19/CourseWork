import os
import time
from memory_manager import MemoryManager

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def print_memory_state(memory_state):
    # Calculate dynamic widths based on content
    start_width = max(len(str(block.start)) for block in memory_state)
    size_width = max(len(str(block.size)) for block in memory_state)
    status_width = max(len("Allocated (ID: " + str(block.id) + ")") if block.is_allocated else len("Free") for block in memory_state)
    
    # Ensure minimum widths
    start_width = max(start_width, 5)  # "Start"
    size_width = max(size_width, 4)    # "Size"
    status_width = max(status_width, 6) # "Status"
    
    # Calculate total width for the box
    total_width = start_width + size_width + status_width + 10  # 10 for padding and separators

    # Print header
    print("\nMemory State:")
    print("┌" + "─" * total_width + "┐")
    
    # Print column headers
    header = f"│ {'Start':^{start_width}} │ {'Size':^{size_width}} │ {'Status':^{status_width}}   │"
    print(header)
    print("├" + "─" * (start_width + 2) + "┼" + "─" * (size_width + 2) + "┼" + "─" * (status_width + 4) + "┤")

    # Print memory blocks
    for block in memory_state:
        status = f"Allocated (ID: {block.id})" if block.is_allocated else "Free"
        row = f"│ {block.start:>{start_width}} │ {block.size:>{size_width}} │ {status:<{status_width}}   │"
        print(row)

    # Print footer
    print("└" + "─" * total_width + "┘")

def print_menu():
    menu_width = 50
    print("\n" + "═" * menu_width)
    print(f"{'Memory Manager - Main Menu':^{menu_width}}")
    print("═" * menu_width)
    print(f"{'1. Allocate Memory':^{menu_width}}")
    print(f"{'2. Deallocate Memory':^{menu_width}}")
    print(f"{'3. View Memory State':^{menu_width}}")
    print(f"{'4. Exit':^{menu_width}}")
    print("═" * menu_width)

def get_input(prompt, input_type=int):
    while True:
        try:
            user_input = input(f"\n{prompt}")
            if user_input.lower() == 'q':
                return None
            return input_type(user_input)
        except ValueError:
            print(f"\nInvalid input. Please enter a valid {input_type.__name__} (or 'q' to cancel)")

def print_status(message, success=True):
    color = '\033[92m' if success else '\033[91m'  # Green for success, Red for failure
    end_color = '\033[0m'
    print(f"\n{color}{message}{end_color}")

def run_cli():
    clear_screen()
    print("\n" + "═" * 60)
    print("Welcome to the Dynamic Partitioning Memory Manager".center(60))
    print("═" * 60)
    
    total_memory = get_input("Enter total memory size: ")
    if total_memory is None or total_memory <= 0:
        print_status("Invalid memory size. Exiting...", False)
        return
    
    manager = MemoryManager(total_memory)
    
    while True:
        clear_screen()
        print_menu()
        choice = get_input("Enter your choice (1-4): ")
        
        if choice is None:
            continue

        if choice == 1:
            size = get_input("Enter size to allocate: ")
            if size is not None:
                result = manager.allocate(size)
                if result is not None:
                    print_status(f"Memory allocated with ID: {result}")
                else:
                    print_status("Allocation failed: Not enough memory", False)
                print_memory_state(manager.get_memory_state())
            input("\nPress Enter to continue...")

        elif choice == 2:
            id = get_input("Enter ID to deallocate: ")
            if id is not None:
                if manager.deallocate(id):
                    print_status("Memory deallocated successfully")
                else:
                    print_status("Deallocation failed: Invalid ID", False)
                print_memory_state(manager.get_memory_state())
            input("\nPress Enter to continue...")

        elif choice == 3:
            clear_screen()
            print_memory_state(manager.get_memory_state())
            input("\nPress Enter to return to the main menu...")

        elif choice == 4:
            clear_screen()
            print("\n" + "═" * 60)
            print("Thank you for using the Memory Manager. Goodbye!".center(60))
            print("═" * 60)
            time.sleep(2)
            clear_screen()
            break

        else:
            print_status("Invalid choice. Please try again.", False)
            time.sleep(1)

if __name__ == "__main__":
    run_cli()

