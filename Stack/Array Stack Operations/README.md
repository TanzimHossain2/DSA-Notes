# 📦 Stack Operations in Array

## Overview

This repository contains C code for basic stack operations, including Push, Pop, and Peek. The operations are implemented using a simple array-based stack.

## Stack Operations

### Push()

- **Description:**
  - Checks if the stack is full.
  - If not full, increments the top and adds the element to the top position.
  - Returns nothing.

- **Implementation:**
  ```c
  top = top + 1
  stack[top] = element
  ```

### Pop()

- **Description:**
  - Checks if the stack is empty.
  - If not empty, removes the element from the top position and decrements the top.
  - Returns the popped element.

- **Implementation:**
  ```c
  element = stack[top]
  top = top - 1
  ```

### Peek()

- **Description:**
  - Retrieves an element from the stack at a specified position from the top.
  - Formula used: `(top - i + 1)`.
  - Example: `peek(s, 1)` retrieves the top element.

- **Implementation:**
  ```c
  int arrIndex = ptr->top - indx + 1;
  return ptr->arr[arrIndex];
  ```

### Diagram

```
  +---+   +---+   +---+   +---+
  | 60|   | 50|   | 40|   | 30|
  +---+   +---+   +---+   +---+
    |       |       |       |
  top      ...     ...      0
```

- **Initial Stack:** [60, 50, 40, 30]

## Understanding the Peek Operation

The Peek operation is designed to retrieve an element from the stack at a specific position from the top. Let's break down the key points:

- `top - i + 1`: This formula calculates the array index based on the position (`i`) from the top of the stack.
- For example, `peek(s, 1)` retrieves the top element, `peek(s, 2)` retrieves the second element from the top, and so on.
- The function returns the element at the calculated index.

## Getting Started

1. Compile and run the `StackOperations.c` file.
2. Check the console for output related to stack operations.

## Note

- This code demonstrates fundamental stack operations using an array.
- Feel free to explore and modify the code for educational purposes.

