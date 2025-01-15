import sys
from cli import run_cli
from gui import run_gui

def main():
    print("Welcome to the Dynamic Partitioning Memory Manager")
    print("1. Command Line Interface")
    print("2. Graphical User Interface")
    
    choice = input("Enter your choice (1 or 2): ")
    
    if choice == '1':
        run_cli()
    elif choice == '2':
        run_gui()
    else:
        print("Invalid choice. Exiting...")
        sys.exit(1)

if __name__ == "__main__":
    main()