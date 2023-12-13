/*
    Linked List Deletion Operations in C

    This program demonstrates various deletion operations on a singly linked list.

    Study Material:
    - Case 1: Delete the first node in the linked list
    - Case 2: Delete a node at a specified index
    - Case 3: Delete the last node in the linked list
    - Case 4: Delete a node by a given value

    Note: The program creates a linked list with five nodes and performs deletion operations.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure representing a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

// Function to traverse and print the elements of the linked list
void traversal(Node *ptr)
{
    printf("--------------------\n");
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("--------------------\n");
}

// Case 1: Delete the first node in the linked list
void deleteFirst(Node **head)
{
    // Check if the linked list is empty
    if (*head == NULL)
    {
        printf("Linked list is empty for deletion at the head function\n");
        return;
    }

    // Save the current head node
    Node *ptr = *head;

    // Update the head to the next node
    *head = (*head)->next;

    // Free the memory of the deleted node
    free(ptr);

    printf("After deletion at Head\n");
    traversal(*head);
}

// Case 2: Delete a node at a specified index
void deleteAtIndex(Node **head, int index)
{
    // Check for invalid index
    if (index < 0)
    {
        printf("Index cannot be negative\n");
        return;
    }

    // Check if the linked list is empty
    if (*head == NULL)
    {
        printf("Linked list is empty for deletion at the index function\n");
        return;
    }

    // Case: Delete the first node (use deleteFirst function)
    if (index == 0)
    {
        printf("Index 0 is not allowed for deletion at the index function. Use deleteFirst function.\n");
        deleteFirst(head);
        return;
    }

    // Traverse to the node before the one to be deleted
    Node *p = *head;
    Node *q = (*head)->next;

    for (int i = 0; i < index - 1 && q != NULL; i++)
    {
        p = p->next;
        q = q->next;
    }

    // Check if index is out of bounds
    if (q == NULL)
    {
        printf("Index out of bounds. Cannot delete.\n");
        return;
    }

    // Update pointers to skip the node to be deleted
    p->next = q->next;

    // Free the memory of the deleted node
    free(q);

    printf("After deletion at index: %d\n", index);
    traversal(*head);
}

// Case 3: Delete the last node in the linked list
void deleteAtLast(Node **head)
{
    // Check if the linked list is empty
    if (*head == NULL)
    {
        printf("Linked list is empty for deletion at the last function\n");
        return;
    }

    // Traverse to the second-to-last node
    Node *p = *head;
    Node *q = (*head)->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    // Update the second-to-last node to point to NULL, effectively removing the last node
    p->next = NULL;

    // Free the memory of the deleted last node
    free(q);

    printf("After deletion at last\n");
    traversal(*head);
}

// Case 4: Delete a node by a given value
void deleteByValue(Node **head, int value)
{
    // Check if the linked list is empty
    if (*head == NULL)
    {
        printf("Linked list is empty for deletion at last function\n");
        return;
    }

    // Traverse to find the node with the specified value
    Node *p = *head;
    Node *q = (*head)->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    // Check if the value was found
    if (q->data == value)
    {
        // Update pointers to skip the node with the specified value
        p->next = q->next;

        // Free the memory of the deleted node
        free(q);

        printf("After deletion at value: %d\n", value);
        traversal(*head);
    }
    else
    {
        printf("Value not found\n");
    }
}

int main()
{
    // Creating a linked list with five nodes
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = NULL;

    // Before deletion
    printf("Before deletion\n");
    traversal(head);

    // After deletion
    deleteFirst(&head);
    deleteAtIndex(&head, 1);
    deleteAtLast(&head);
    deleteByValue(&head, 41);

    return 0;
}
