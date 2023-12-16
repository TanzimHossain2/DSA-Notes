# Doubly Linked List Implementation in C

This repository contains a basic implementation of a doubly linked list in C. The program includes functions for traversing the doubly linked list and printing its elements. Additionally, it provides functions for inserting a new node at the beginning and end of the list.

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)

## Overview

The doubly linked list is a data structure where each node contains a data element and two pointers: one to the next node and one to the previous node. This implementation showcases basic operations such as traversal and insertion.

## Functions

1. **traversal**
   - Purpose: Traverse and print the elements of the doubly linked list.
   - Time Complexity: O(n) where n is the number of nodes in the list.

2. **insertAtBeginning**
   - Purpose: Insert a new node at the beginning of the doubly linked list.
   - Time Complexity: O(1).

3. **insertAtEnd**
   - Purpose: Insert a new node at the end of the doubly linked list.
   - Time Complexity: O(n) in the worst case.

## Usage

To use this doubly linked list implementation in your C program, follow these steps:

1. Include the `doublyLinkedList.c` file in your project.
2. Call the functions as needed in your program.

Remember to allocate memory for nodes dynamically and manage memory appropriately.

## Example

Here's an example of how to use the doubly linked list functions in your C program:

```c
#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.c"

int main() {
    Node *head = NULL;

    // Creating a doubly linked list with five nodes
    // (You can also initialize it based on your requirements)

    // Traversal
    traversal(head);

    // Insertion at the beginning
    insertAtBeginning(&head, 99);

    // Insertion at the end
    insertAtEnd(head, 55);

    return 0;
}
```

## Contributing

If you find any issues or have improvements to suggest, feel free to open an issue or create a pull request. Contributions are welcome! Happy coding! 😊
