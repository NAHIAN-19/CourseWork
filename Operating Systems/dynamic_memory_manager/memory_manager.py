import random

class MemoryBlock:
    """Represents a block of memory with properties like size, allocation status, and visual attributes"""
    def __init__(self, start, size, is_allocated=False):
        self.start = start          # Starting position of the memory block
        self.size = size            # Size of the memory block
        self.is_allocated = False   # Allocation status flag
        self.id = None             # Unique identifier for allocated blocks
        self.color = None          # Color for visualization purposes

class MemoryManager:
    """Manages memory allocation and deallocation using a first-fit strategy"""
    def __init__(self, total_memory, algorithm='first_fit'):
        self.total_memory = total_memory  # Total available memory size
        # Initialize with one free block spanning total memory
        self.memory = [MemoryBlock(0, total_memory)]
        self.next_id = 1  # Counter for generating unique block IDs
        self.algorithm = algorithm  # Memory allocation algorithm
        # Color palette for visualizing different memory blocks
        self.colors = ['#FF6B6B', '#4ECDC4', '#45B7D1', '#FFA07A', '#98D8C8', 
                        '#F06292', '#AED581', '#7986CB', '#9575CD', '#4DD0E1']

    def allocate(self, size):
        if self.algorithm == 'first_fit':
            return self._first_fit(size)
        elif self.algorithm == 'best_fit':
            return self._best_fit(size)
        elif self.algorithm == 'worst_fit':
            return self._worst_fit(size)

    def _first_fit(self, size):
        for block in self.memory:
            if not block.is_allocated and block.size >= size:
                return self._allocate_block(block, size)
        return None

    def _best_fit(self, size):
        best_block = None
        smallest_difference = float('inf')
        
        for block in self.memory:
            if not block.is_allocated and block.size >= size:
                difference = block.size - size
                if difference < smallest_difference:
                    smallest_difference = difference
                    best_block = block
                    
        return self._allocate_block(best_block, size) if best_block else None

    def _worst_fit(self, size):
        worst_block = None
        largest_difference = -1
        
        for block in self.memory:
            if not block.is_allocated and block.size >= size:
                difference = block.size - size
                if difference > largest_difference:
                    largest_difference = difference
                    worst_block = block
                    
        return self._allocate_block(worst_block, size) if worst_block else None

    def _allocate_block(self, block, size):
        if block.size > size:
            new_block = MemoryBlock(block.start + size, block.size - size)
            self.memory.insert(self.memory.index(block) + 1, new_block)
            block.size = size
        block.is_allocated = True
        block.id = self.next_id
        block.color = random.choice(self.colors)
        self.next_id += 1
        return block.id

    def deallocate(self, id):
        """
        Deallocates a memory block by ID and merges adjacent free blocks
        Returns: True if successful, False if block not found
        """
        for i, block in enumerate(self.memory):
            if block.id == id and block.is_allocated:
                # Reset block properties
                block.is_allocated = False
                block.id = None
                block.color = None
                # Combine with neighboring free blocks
                self._merge_adjacent_blocks(i)
                return True
        return False

    def _merge_adjacent_blocks(self, index):
        """
        Helper method to merge adjacent free memory blocks
        Merges both forward and backward from the given index
        """
        # Merge with next blocks if they're free
        while index < len(self.memory) - 1 and not self.memory[index + 1].is_allocated:
            self.memory[index].size += self.memory[index + 1].size
            self.memory.pop(index + 1)
        # Merge with previous blocks if they're free
        while index > 0 and not self.memory[index - 1].is_allocated:
            self.memory[index - 1].size += self.memory[index].size
            self.memory.pop(index)
            index -= 1

    def get_memory_state(self):
        """Returns the current state of memory blocks"""
        return self.memory