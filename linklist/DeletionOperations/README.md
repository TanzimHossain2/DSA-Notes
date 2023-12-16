# Linked List Deletion Operations

This folder contains C programs illustrating various deletion operations on a singly linked list. These programs serve as valuable study material for learners interested in understanding and implementing linked list operations.

## Table of Contents

1. [**deleteFirst**](deletionInLinkList.c#L40): Deletes the first node in the linked list.
   - Time Complexity: O(1)

2. [**deleteAtIndex**](deletionInLinkList.c#L63): Deletes a node at a specified index in the linked list.
   - Time Complexity: O(n) in the worst case, where n is the number of nodes in the list.

3. [**deleteAtLast**](deletionInLinkList.c#L115): Deletes the last node in the linked list.
   - Time Complexity: O(n), as it involves traversing the list to find the second-to-last node.

4. [**deleteByValue**](deletionInLinkList.c#L145): Deletes a node by a given value.
   - Time Complexity: O(n) in the worst case, where n is the number of nodes in the list.

## How to Use

1. **Compile the Program:**

   ```bash
   gcc deletionInLinkList.c -o deletionInLinkList
   ```

2. **Run the Executable:**

   ```bash
   ./deletionInLinkList
   ```

3. **Follow On-Screen Instructions:**
   - The program creates a linked list with five nodes.
   - Perform deletion operations as prompted on the screen.
   - The linked list will be updated based on the chosen operation.

## Key Considerations

- **Boundary Checks:**
  - The programs handle scenarios like an empty linked list, deletion at the head, and index out of bounds.
- **Memory Management:**
  - Deallocated memory to avoid memory leaks after node deletion.
- **Study Material:**
  - Each program includes comments explaining the logic and steps of the deletion operation.

## Important Note

- These programs are designed for educational purposes.
- Understanding the logic and implementing variations is encouraged for a deeper grasp of linked list operations.

Feel free to explore, modify, and contribute to enhance your understanding and share knowledge with others. Happy Coding! 😊
