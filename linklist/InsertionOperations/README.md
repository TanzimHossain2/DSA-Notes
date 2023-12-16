# Linked List Insertion Operations in C

This C program provides a menu-driven interface to perform various operations on a singly linked list.

## Study Material:-

- The program allows insertion at the beginning, end, a specific index, or after a given node.
- It displays the total number of nodes and the linked list itself.
- The program continuously prompts the user for operations until they choose to exit.

### Functions:-

1. **traversal:**
   - Traverse and print the elements of the linked list.

2. **insertAtBeginning:**
   - Insert a new node at the beginning of the linked list.

3. **insertAtEnd:**
   - Insert a new node at the end of the linked list.

4. **insertAtIndex:**
   - Insert a new node at a specific index in the linked list.

5. **insertAfterNode:**
   - Insert a new node after a specific node in the linked list.

6. **totalNodes:**
   - Display the total number of nodes in the linked list.

7. **makeClean:**
   - Free the memory occupied by the linked list.

8. **handleUserChoice:**
   - Handle the user's choice and perform corresponding operations.

9. **mainLoop:**
   - Main menu loop for user interaction.

#### Usage:-

1. Compile the program using a C compiler.

   ```bash
   gcc -o insertionInLinkList insertionInLinkList.c
   ```

2. Run the compiled program.

   ```bash
   ./insertionInLinkList
   ```

3. Follow the menu prompts to perform linked list operations.

#### Example Output:-

```plaintext
Choose an operation:
1. Insert at the Beginning
2. Insert at the End
3. Insert at a Specific Index
4. Insert After a Node
5. Display Total Nodes
6. Display Linked List
7. Exit

Enter your choice (1-7): 1
Enter data for the new node: 42
After insertion at Head
--------------------
Elements are: 42
--------------------

...

Exiting program.
```

#### Time Complexity:-

- **insertAtBeginning:** O(1) (constant time complexity)
- **insertAtEnd:** O(n) (linear time complexity, where n is the number of elements in the linked list)
- **insertAtIndex:** O(n) (linear time complexity, where n is the number of elements in the linked list)
- **insertAfterNode:** O(n) (linear time complexity, where n is the number of elements in the linked list)
- **totalNodes:** O(n) (linear time complexity, where n is the number of elements in the linked list)

#### Space Complexity:-

- The space complexity for creating the linked list is O(n), where n is the number of nodes.

Feel free to explore and modify the code for educational purposes. Try adding more operations to the program! Happy coding! 😊
