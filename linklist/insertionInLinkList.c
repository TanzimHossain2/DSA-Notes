/*
    Linked List Operations in C

    This program provides a menu-driven interface to perform various operations on a singly linked list.

    Study Material:
    - The program allows insertion at the beginning, end, a specific index, or after a given node.
    - It displays the total number of nodes and the linked list itself.
    - The program continuously prompts the user for operations until they choose to exit.

    Functions:
    - traversal: Traverse and print the elements of the linked list.
    - insertAtBeginning: Insert a new node at the beginning of the linked list.
    - insertAtEnd: Insert a new node at the end of the linked list.
    - insertAtIndex: Insert a new node at a specific index in the linked list.
    - insertAfterNode: Insert a new node after a specific node in the linked list.
    - totalNodes: Display the total number of nodes in the linked list.
    - makeClean: Free the memory occupied by the linked list.
    - handleUserChoice: Handle the user's choice and perform corresponding operations.
    - mainLoop: Main menu loop for user interaction.

    Note: Make sure to free memory using the makeClean function before exiting.
*/

#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
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

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node **head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
    printf("After insertion at Head\n");
    traversal(*head);
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;

    printf("After insertion at End\n");
    traversal(head);
}

// Function to insert a new node at a specific index in the linked list
void insertAtIndex(Node *head, int data, int index)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    int i = 0;

    while (i != index - 1 && p != NULL)
    {
        p = p->next;
        i++;
    }

    if (p == NULL)
    {
        printf("Index out of bounds\n");
        return;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    printf("After insertion at Index Position: %d\n", index);
    traversal(head);
}

// Function to insert a new node after a specific node in the linked list
void insertAfterNode(Node *head, Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        printf("Previous Node is NULL\n");
        return;
    }

    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    printf("After insertion after Node\n");
    traversal(head);
}

// Function to display the total number of nodes in the linked list
void totalNodes(Node *head)
{
    int count = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("Total nodes are: %d\n", count);
}

// Function to free the memory occupied by the linked list
void makeClean(Node **head)
{
    Node *temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

// Function to handle user's choice and perform corresponding operations
void handleUserChoice(Node **head, char choice)
{
    int data, index;
    Node *prevNode;

    switch (choice)
    {
    case '1':
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        insertAtBeginning(head, data);
        break;

    case '2':
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        insertAtEnd(*head, data);
        break;

    case '3':
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        printf("Enter the index for insertion: ");
        scanf("%d", &index);
        insertAtIndex(*head, data, index);
        break;

    case '4':
        printf("Enter data for the new node: ");
        scanf("%d", &data);
        printf("Enter the data of the node after which you want to insert: ");
        scanf("%d", &index);
        prevNode = *head;
        while (prevNode != NULL && prevNode->data != index)
        {
            prevNode = prevNode->next;
        }
        insertAfterNode(*head, prevNode, data);
        break;

    case '5':
        totalNodes(*head);
        break;

    case '6':
        printf("Linked List\n");
        traversal(*head);
        break;

    case '7':
        printf("Exiting program.\n");
        break;

    default:
        printf("Invalid choice. Please enter a number between 1 and 7.\n");
        break;
    }
}

// Function for the main menu loop
void mainLoop(Node **head)
{
    char choice;

    do
    {
        printf("\nChoose an operation:\n");
        printf("1. Insert at the Beginning\n");
        printf("2. Insert at the End\n");
        printf("3. Insert at a Specific Index\n");
        printf("4. Insert After a Node\n");
        printf("5. Display Total Nodes\n");
        printf("6. Display Linked List\n");
        printf("7. Exit\n");

        printf("Enter your choice (1-7): ");
        scanf(" %c", &choice);

        handleUserChoice(head, choice);

    } while (choice != '7');
}

int main()
{
    Node *head = NULL;

    // Start the main loop for user interaction
    mainLoop(&head);

    // Free memory before exiting
    makeClean(&head);

    return 0;
}
