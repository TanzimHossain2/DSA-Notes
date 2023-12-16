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

### StackTop()

- **Description:**
  - Returns the top element of the stack.

- **Implementation:**

  ```c
  return ptr->arr[ptr->top];
  ```

  - `return ptr->arr[ptr->top];`: This returns the top element of the stack.

---

### StackBottom()

- **Description:**
  - Returns the bottom element of the stack.

- **Implementation:**

  ```c
  return ptr->arr[0];
  ```

  - `return ptr->arr[0];`: This returns the bottom element of the stack.

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

## Time Complexity

The time complexity of stack operations depends on the implementation. In the case of array-based stacks:

- Push: O(1) - Constant time, as it involves simple array indexing and incrementing the top.
- Pop: O(1) - Constant time, as it also involves simple array indexing and decrementing the top.
- Peek: O(1) - Constant time, as it calculates the array index directly.
- stackBottom: O(1) - Constant time, as it returns the first element of the array.
- stackTop: O(1) - Constant time, as it returns the last element of the array.
- isEmpty: O(1) - Constant time, as it checks if the top is -1.
- isFull: O(1) - Constant time, as it checks if the top is equal to the size of the stack.

StackTop and StackBottom, being direct array access operations, also have a time complexity of O(1).

**Note:** These time complexities assume that array resizing (if dynamically allocated) is an infrequent operation.

## Note

This code serves as a demonstration of fundamental stack operations using an array. Feel free to explore and modify the code for educational purposes.
