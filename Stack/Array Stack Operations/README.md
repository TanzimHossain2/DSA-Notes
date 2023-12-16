# 📦 Stack Operations in Array

## Overview

This repository contains C code for basic stack operations, including Push, Pop, and Peek. The operations are implemented using a simple array-based stack.

## Stack Operations

### Push()

The `Push()` operation appends an element to the top of the stack. Here's how it works:

- **Description:**
  1. Check if the stack is full.
  2. If the stack is not full, increment the top and add the element to the top position.

- **Pseudo Code:**
    ```c
    top = top + 1
    stack[top] = element
    ```

- **Implementation:**
  ```c
  ptr->top++;
  ptr->arr[ptr->top] = val;
  ```
  - `ptr->top++`: This increments the top of the stack.
  - `ptr->arr[ptr->top] = val;`: This adds the element to the top position.

 ---

### Pop()

- **Description:**
  - Checks if the stack is empty.
  - If not empty, removes the element from the top position and decrements the top.
  - Returns the popped element.

- **Pseudo Code:**
  ```c
  element = stack[top]
  top = top - 1
  return element
  ```

- **Implementation:**
  ```c
  int val = ptr->arr[ptr->top];
  ptr->top--;
  return val;
  ```
  - `int val = ptr->arr[ptr->top];`: This stores the top element in a variable.
  - `ptr->top--;`: This decrements the top of the stack.
  - `return val;`: This returns the popped element.

---

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
  - `int arrIndex = ptr->top - indx + 1;`: This calculates the array index based on the position (`indx`) from the top of the stack.
  - `return ptr->arr[arrIndex];`: This returns the element at the calculated index.

## Understanding the Peek Operation

The Peek operation is designed to retrieve an element from the stack at a specific position from the top. Let's break down the key points:

- `top - i + 1`: This formula calculates the array index based on the position (`i`) from the top of the stack. The top of the stack is considered position 1, the next element is position 2, and so on.
- For example, `peek(s, 1)` retrieves the top element, `peek(s, 2)` retrieves the second element from the top, and so on.
- The function returns the element at the calculated index.

### Diagram

```
  +---+   +---+   +---+   +---+
  | 60|   | 50|   | 40|   | 30|
  +---+   +---+   +---+   +---+
    |       |       |       |
  top      ...     ...      0
```
- In this example, the **Initial Stack:** [60, 50, 40, 30] is shown.
- The `peek()` function uses the formula `top - i + 1` to calculate the array index based on the position (`i`) from the top of the stack.
- For example, `peek(s, 1)` will calculate the array index as `4 - 1 + 1 = 4`. This will return the element at index 4, which is 60.
- Similarly, `peek(s, 2)` will calculate the array index as `4 - 2 + 1 = 3`. This will return the element at index 3, which is 50.


## Note

This code serves as a demonstration of fundamental stack operations using an array. Feel free to explore and modify the code for educational purposes.