// Circular Linked List Implementation in C

/*=====================================================================
    This C program illustrates the concept of a circular linked list.
    In a circular linked list, the last node points back to the first node, forming a loop.

    The program demonstrates the creation of a circular linked list with five nodes, each containing data.
    It includes functions for traversing the circular linked list and inserting a new node at the beginning.

    Structure:
    - Each node in the circular linked list is represented by the structure 'Node,' containing an integer 'data'
      and a pointer 'next' that points to the next node in the list.
    
    Functions:
    1. `traversal`: This function traverses the circular linked list and prints the data of each node.
       It starts from the head and continues until it reaches the head again, completing one loop.
    
    2. `insertAtFirst`: This function inserts a new node at the beginning of the circular linked list.
       It creates a new node, adjusts pointers to include the new node, and updates the head of the list.

    Note: The circular linked list is created with five nodes in this example.

    Usage:
    - The main function initializes a circular linked list with five nodes, prints the elements using the traversal function,
      and inserts a new node at the beginning. The resulting list is then printed again for verification.

    It's important to understand the structure of a node, the traversal process, and the insertion at the beginning to work with
    circular linked lists effectively.

    This documentation serves as a guide for learning and revising circular linked list concepts, making it useful for exams
    and understanding the code's functionality.
===================================================================== */

#include <stdio.h>
#include <stdlib.h>

// Structure representing a node in the circular linked list
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;

// Function to traverse and print the elements of the circular linked list
void traversal(Node *head)
{
    Node *ptr = head;

    // Checking if the circular linked list is empty
    if (head == NULL)
    {
        printf("Circular linked list is empty\n");
        return;
    }

    // Traversing the circular linked list and printing the elements
    printf("--------------------\n");
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("--------------------\n");
}

// Function to insert a new node at the beginning of the circular linked list
void insertAtFirst(Node **head, int data)
{
    // Creating a new node
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;

    // Finding the last node in the circular linked list
    Node *p = (*head)->next;
    while (p->next != *head)
    {
        p = p->next;
    }

    // Connecting the new node to the beginning and updating the head
    p->next = ptr;
    ptr->next = *head;
    *head = ptr;

    // Printing the elements after insertion
    printf("Elements after insertion at the beginning\n");
    traversal(*head);
}

int main()
{
    // Creating a circular linked list with five nodes and Allocate them in the heap
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));

    // Setting data and pointers for each node
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = head;

    // Traversal
    traversal(head);

    // Insertion at the beginning
    insertAtFirst(&head, 99);

    return 0;
}
