# Stack

A **Stack** is a fundamental data structure that operates on the Last In First Out (LIFO) principle. It's like a stack of plates; the last plate you put on the stack is the first one you can pick up.
It also know as FILO (First In Last Out) or LIFO (Last In First Out).

## Operations

### 1. Push
- **Definition:** Adds an element to the top of the stack.
- **How it Works:** Imagine adding a new plate to the top of the stack.

### 2. Pop
- **Definition:** Removes the topmost element from the stack.
- **How it Works:** Similar to taking the top plate off the stack.

### 3. Peek(index)
- **Definition:** Returns the value at a given index.
- **How it Works:** Allows you to look at a specific plate in the stack.

### 4. isEmpty / isFull
- **Definition:** Checks if the stack is empty or full.
- **How it Works:** It's like checking if there are any plates on the stack or if it's too high.

## Applications

1. **Used in function calls:** Keeps track of function calls and returns.
2. **Infix to postfix conversion:** Helps in mathematical expressions.
3. **Parenthesis balancing:** Ensures that parentheses are opened and closed correctly.

## Stack ADT (Abstract Data Type)

In the world of programming, we create a **Stack Abstract Data Type (ADT)** using an array. Think of it as creating a shelf to store plates, where the shelf is the ADT and the plates are the elements. The shelf has a fixed size, and we can only add or remove plates from the top. We can't add or remove plates from the middle or bottom of the stack. This is the same as a stack data structure. 

### Basic Operations

1. **push():** Adds a plate to the shelf.
2. **pop():** Takes the top plate off the shelf.
3. **peek(index):** Allows you to look at a specific plate.
4. **isEmpty() / isFull():** Checks if the shelf is empty or full.

### Why -1 for Empty Stack?

In programming, we usually start counting from 0. When the stack is empty, we set the index to -1 to indicate there are no plates on the shelf, and when we push, we increment the index to 0.

## Implementing Stack Using Array

```c
struct Stack {
    int size;
    int top;
    int *arr;
};

// Initializing stack
struct Stack s;
s.size = 100;
s.top = -1;  // Indicates an empty stack
s.arr = (int *)malloc(s.size * sizeof(int));
```
---
### Workflow Diagram

Consider a simple stack operation sequence:

1. **Empty Stack:**
   ```
   |  |
   ```

2. **Push 5:**
   ```
   | 5 |
   ```

3. **Push 8:**
   ```
   | 8 |
   | 5 |
   ```

4. **Pop:**
   ```
   | 5 |
   ```

This sequence represents the state of the stack after each operation:

- Initially, the stack is empty.
- Pushing 5 adds it to the top of the stack.
- Pushing 8 adds it above 5.
- Popping removes the topmost element (8), leaving 5.
---

In the workflow diagram, each box represents a step in the stack's operation. Starting with an empty stack, we push values onto it, and when we pop, we remove the topmost element.

This simplified explanation uses everyday examples and diagrams for a clearer understanding.
