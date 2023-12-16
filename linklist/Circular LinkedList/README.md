# Circular Linked List Implementation in C

## Overview

This C program demonstrates the concept of a circular linked list, where the last node points back to the first node, forming a loop. The program creates a circular linked list with five nodes, showcasing traversal and insertion operations.

## Structure

Each node in the circular linked list is represented by the `Node` structure, which includes an integer `data` and a pointer `next` pointing to the next node in the list.

## Functions

### 1. `traversal`

This function traverses the circular linked list, starting from the head and printing the data of each node until it completes one loop.

### 2. `insertAtFirst`

This function inserts a new node at the beginning of the circular linked list. It creates a new node, adjusts pointers to include the new node, and updates the head of the list.

## Usage

The main function initializes a circular linked list with five nodes, prints the elements using the `traversal` function, and inserts a new node at the beginning. The resulting list is then printed again for verification.

## How to Run

To run the program, compile the source code using a C compiler and execute the generated executable.

```bash
gcc circular_linked_list.c -o circular_linked_list
./circular_linked_list
```

## Time Complexity:-

- Traversal: O(n) where n is the number of nodes in the list.
- Insertion at the beginning: O(1).

## Important Notes

- The circular linked list is created with five nodes as an example.
- Ensure understanding of the node structure, traversal process, and insertion at the beginning to work effectively with circular linked lists.

## Contribution

Feel free to contribute to the code or provide suggestions for improvement. Your contributions are welcome!
