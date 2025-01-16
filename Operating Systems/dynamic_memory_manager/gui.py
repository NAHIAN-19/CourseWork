import tkinter as tk
from tkinter import messagebox
from memory_manager import MemoryManager

class MemoryManagerGUI:
    def __init__(self, master):
        self.master = master
        self.master.title("Enhanced Memory Manager")
        self.master.geometry("800x600")
        self.manager = None

        self.canvas = tk.Canvas(master, width=780, height=400, bg='white')
        self.canvas.pack(pady=20)

        self.input_frame = tk.Frame(master)
        self.input_frame.pack(pady=10)

        self.size_label = tk.Label(self.input_frame, text="Size:")
        self.size_label.grid(row=0, column=0, padx=5)
        self.size_entry = tk.Entry(self.input_frame, width=10)
        self.size_entry.grid(row=0, column=1, padx=5)

        self.allocate_button = tk.Button(self.input_frame, text="Allocate", command=self.allocate_memory, state=tk.DISABLED)
        self.allocate_button.grid(row=0, column=2, padx=5)

        self.id_label = tk.Label(self.input_frame, text="ID:")
        self.id_label.grid(row=0, column=3, padx=5)
        self.id_entry = tk.Entry(self.input_frame, width=10)
        self.id_entry.grid(row=0, column=4, padx=5)

        self.deallocate_button = tk.Button(self.input_frame, text="Deallocate", command=self.deallocate_memory, state=tk.DISABLED)
        self.deallocate_button.grid(row=0, column=5, padx=5)

        self.init_frame = tk.Frame(master)
        self.init_frame.pack(pady=10)

        self.init_label = tk.Label(self.init_frame, text="Total Memory Size:")
        self.init_label.grid(row=0, column=0, padx=5)
        self.init_entry = tk.Entry(self.init_frame, width=10)
        self.init_entry.grid(row=0, column=1, padx=5)

        self.init_button = tk.Button(self.init_frame, text="Initialize Memory", command=self.initialize_memory)
        self.init_button.grid(row=0, column=2, padx=5)

        self.status_label = tk.Label(master, text="", fg="green")
        self.status_label.pack(pady=10)

        self.algo_frame = tk.Frame(master)
        self.algo_frame.pack(pady=10)
        
        self.algo_label = tk.Label(self.algo_frame, text="Algorithm:")
        self.algo_label.grid(row=0, column=0, padx=5)
        
        self.algo_var = tk.StringVar(value="first_fit")
        algorithms = [("First Fit", "first_fit"), ("Best Fit", "best_fit"), ("Worst Fit", "worst_fit")]
        
        for i, (text, value) in enumerate(algorithms):
            rb = tk.Radiobutton(self.algo_frame, text=text, variable=self.algo_var, value=value, command=self.update_algorithm)
            rb.grid(row=0, column=i+1, padx=5)
            
    def update_algorithm(self):
        if self.manager:
            self.manager.algorithm = self.algo_var.get()
            self.status_label.config(text=f"Algorithm changed to {self.algo_var.get()} fit", fg="green")
            
    def initialize_memory(self):
        try:
            size = int(self.init_entry.get())
            if size <= 0:
                raise ValueError("Size must be positive")
            self.manager = MemoryManager(size,self.algo_var.get())
            self.allocate_button['state'] = tk.NORMAL
            self.deallocate_button['state'] = tk.NORMAL
            self.init_frame.pack_forget()  # Remove initialization frame
            self.draw_memory()
            self.status_label.config(text="Memory initialized successfully", fg="green")
        except ValueError as e:
            messagebox.showerror("Error", str(e))

    def allocate_memory(self):
        try:
            size = int(self.size_entry.get())
            if size <= 0:
                raise ValueError("Size must be positive")
            result = self.manager.allocate(size)
            if result is not None:
                self.status_label.config(text=f"Memory allocated with ID: {result}", fg="green")
            else:
                self.status_label.config(text="Allocation failed: Not enough memory", fg="red")
            self.draw_memory()
            self.size_entry.delete(0, tk.END)  # Reset the size entry field
        except ValueError as e:
            messagebox.showerror("Error", str(e))

    def deallocate_memory(self):
        try:
            id = int(self.id_entry.get())
            if self.manager.deallocate(id):
                self.status_label.config(text="Memory deallocated successfully", fg="green")
            else:
                self.status_label.config(text="Deallocation failed: Invalid ID", fg="red")
            self.draw_memory()
            self.id_entry.delete(0, tk.END)  # Reset the ID entry field
        except ValueError:
            messagebox.showerror("Error", "Invalid ID")

    def draw_memory(self):
        self.canvas.delete("all")
        memory_state = self.manager.get_memory_state()
        total_memory = self.manager.total_memory
        block_height = 100
        y = 150

        for block in memory_state:
            x1 = (block.start / total_memory) * 780
            x2 = ((block.start + block.size) / total_memory) * 780
            color = block.color if block.is_allocated else "lightgrey"
            self.canvas.create_rectangle(x1, y, x2, y + block_height, fill=color, outline="black")
            if block.is_allocated:
                self.canvas.create_text((x1 + x2) / 2, y + block_height / 2, text=f"ID: {block.id}\nSize: {block.size}")
            else:
                self.canvas.create_text((x1 + x2) / 2, y + block_height / 2, text=f"Free\n{block.size}")

        self.canvas.create_text(390, 50, text=f"Total Memory: {total_memory}", font=("Arial", 14, "bold"))

def run_gui():
    root = tk.Tk()
    MemoryManagerGUI(root)
    root.mainloop()

if __name__ == "__main__":
    run_gui()

