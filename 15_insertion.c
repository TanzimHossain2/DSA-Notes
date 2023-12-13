#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node;

void traversal(Node *ptr)
{
    printf("--------------------\n");
    // Traversing the linked list and printing each element
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("--------------------\n");
}

void insertAtBeginning(Node **head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
    printf("After insertion at Head\n");
    traversal(*head);
}

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

    mainLoop(&head);

    // Free memory before exiting
    makeClean(&head);

    return 0;
}
