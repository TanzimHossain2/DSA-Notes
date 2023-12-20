# Stack Using Linked List

## Overview

This repository demonstrates the implementation of a stack data structure using a linked list in C. The stack adheres to a Last-In-First-Out (LIFO) approach, where elements are added and removed from the same end, known as the top.

## Key Points

### Side 1:-

- **O(1) Insertion and Deletion:** Leveraging a linked list ensures constant time complexity for both push (insertion) and pop (deletion) operations, ensuring efficiency.

### Side 2:-

#### What is Side 2?

Side 2 visually and conceptually illustrates the structure of stack operations using a linked list. It encompasses the logical arrangement of nodes and pointers, facilitating smooth push and pop operations.

#### Side 2 Representation:-

```plaintext
-----------------------------------
| 50 | 40 | 30 | 20 | <- Top
-----------------------------------
```

- Each box represents a node containing data (e.g., 20, 30, 40, 50).
- The arrow indicates the stack's direction, with the top positioned on the left.
- Nodes are linked, enabling easy traversal and efficient push/pop operations.

## How to Implement Stack Using Linked List?

1. **Side 1 for Push and Pop Operations (O(1)):**
   - Utilize the linked list structure for efficient insertion and deletion.
   - Head points to the top of the stack.

2. **Head is Now → Top:**
   - The head of the linked list serves as the top of the stack.

3. **Stack Empty Condition (top == NULL):**
   - The stack is deemed empty when the top points to NULL.

4. **Stack Full When Heap Memory is Exhausted (ptr == NULL):**
   - Memory exhaustion is detected when attempting to allocate a new node.

5. **Custom Size Stack:**
   - Users can set a custom size for the stack, providing control over memory usage.

---

**Creating a Custom Size Stack:**

Users can tailor the stack size using a linked list, allowing efficient memory management. Custom sizing empowers users to optimize memory usage based on specific requirements.

---

**Important Note:**
Understanding the logical structure of Side 2 enhances comprehension of how the stack operates using a linked list. This visual representation aids in grasping the dynamic nature of push and pop operations.

---

Feel free to explore the code. Happy coding! 😊
