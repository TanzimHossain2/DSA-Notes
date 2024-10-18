/*=====================================================================
    Linked List Implementation in C

    This program demonstrates the basic implementation of a singly linked list in C.
    It includes functions for traversing the linked list and printing its elements.

    Functions:
    - LinkListTraversal: Traverse and print the elements of the linked list.
    - traversal: Traverse and print the elements of the linked list.

    Note: The program creates a linked list with four nodes and prints its elements.

=====================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to traverse and print the elements of the linked list
void LinkListTraversal(struct Node *ptr)
{
    struct Node *temp = ptr;

    // Traverse the linked list and print elements
    while (temp->next != NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }

    // Print the last element
    printf("Element: %d\n", temp->data);
}

// Function to traverse and print the elements of the linked list
void traversal(struct Node *ptr)
{
    // Traverse the linked list and print elements
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // Allocate memory for nodes in the linked list in Heap
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    // Print elements using the traversal function
    printf("Using LinkListTraversal Function:\n");
    LinkListTraversal(head);

    // Print elements using the traversal function
    printf("\nUsing traversal Function:\n");
    traversal(head);

    return 0;
}
