/*================================================================
* Filename: Queue_using_LinkList.c

* Description: Implementation of a Queue using a Linked List.

* Algorithm:
    - For enqueue operation:
        1. Create a new node.
        2. If the queue is empty, set both front and rear to the new node.
        3. If the queue is not empty, set the next of the current rear to the new node and update rear.
    
    - For dequeue operation:
        1. If the queue is empty, display an error message.
        2. If the queue is not empty, store the data of the front node, update front to the next node, and free the memory of the front node.

    - For peek operation:
        1. Traverse the queue until the desired index, if it exists.
        2. If the index does not exist, return a specific value (e.g., INT_MIN).
        3. If the index exists, return the data at that index.

* Comments:
    - The linkedListTraversal function is used to print the elements of the linked list.

* Issues:
    - The peek function should return a specific value (e.g., INT_MIN) for an invalid index.

* Readability:
    - Code structure and variable names are clear.
    - Additional comments provided for clarity.

================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Linked List Traversal
void linkedListTraversal(Node *ptr)
{
    printf("Printing the elements of this linked list: [");

    while (ptr != NULL)
    {
        printf("%d, ", ptr->data);
        ptr = ptr->next;
    }
    printf("]\n");

    printf("------------------------------------\n");
}

// Enqueue
void enqueue(Node **front, Node **rear, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));

    if (ptr == NULL)
    {
        printf("Queue is full\n");
        return;
    }

    ptr->data = data;
    ptr->next = NULL;

    if (*front == NULL)
    {
        *front = *rear = ptr;
    }
    else
    {
        (*rear)->next = ptr;
        *rear = ptr;
    }

    printf("Enqueued %d\n", data);
}

// Dequeue
int dequeue(Node **front)
{
    int val = -1;

    if (*front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        Node *ptr = *front;
        *front = (*front)->next;
        val = ptr->data;
        free(ptr);
        printf("Dequeued %d from the queue\n", val);
    }

    return val;
}

// Peek at index
int peek(Node *front, int index)
{
    Node *ptr = front;

    for (int i = 0; i < index - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        printf("Index does not exist in the queue\n");
        return INT_MIN; // INT_MIN is a system defined macro that is used to represent integer minimum values. which is defined in limits.h header file.
    }
}

int main()
{
    Node *front = NULL;
    Node *rear = NULL;

    printf("Before enqueueing\n");
    linkedListTraversal(front);

    enqueue(&front, &rear, -1);
    enqueue(&front, &rear, 20);
    enqueue(&front, &rear, 30);

    printf("\nAfter enqueueing\n");
    linkedListTraversal(front);

    dequeue(&front);
    dequeue(&front);

    printf("\nAfter dequeueing\n");
    linkedListTraversal(front);

    int peekValue = peek(front, 4);
    if (peekValue != INT_MIN)
    {
        printf("\nPeeked value at index 1: %d\n", peekValue);
    }

    return 0;
}
