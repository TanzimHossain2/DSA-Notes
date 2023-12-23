/*=====================================================================
* Program Name : Queue_using_array.c
* Description : Implementation of a Queue using an array with documentation.
* Note        : This program demonstrates the implementation of a Queue
*               data structure using an array. It includes functions for
*               enqueue, dequeue, traversing, checking if the queue is full
*               or empty, and retrieving elements from the front, rear, or
*               a specified position. The code is well-documented and aims
*               for simplicity and clarity.
* Algorithm   : The program utilizes a structure to represent the Queue,
*               checking for full and empty conditions, and implementing
*               enqueue and dequeue operations. The queue elements are
*               stored in an array. The algorithm maintains the front and
*               rear indices, ensuring efficient operations. Each function
*               includes error handling and a traversal function to display
*               the elements. The main function demonstrates the usage of
*               these operations with sample data.
=====================================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int front;
    int rear;
    int size;
    int *arr;
} Queue;

// Function to check if the queue is full
int isFull(Queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1; // Full
    }
    else
    {
        return 0; // Not full
    }
}

// Function to check if the queue is empty
int isEmpty(Queue *q)
{
    if (q->front == q->rear)
    {
        return 1; // Empty
    }
    else
    {
        return 0; // Not empty
    }
}

// Function to traverse and display the elements of the queue
void traverseQueue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        printf("The elements of the Queue are: [ ");
        for (int i = q->front + 1; i <= q->rear; i++)
        {
            printf("%d, ", q->arr[i]);
        }
        printf("]\n--------------------------\n");
    }
}

// Function to enqueue an element into the queue
void enqueue(Queue *q, int data)
{
    if (isFull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = data;
        printf("Enqueued element: %d\n", data);
        // Traversing Queue
        traverseQueue(q);
    }
}

// Function to dequeue an element from the queue
void dequeue(Queue *q)
{
    int dequeuedElement = -1;

    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        q->front++;
        dequeuedElement = q->arr[q->front];
    }

    if (dequeuedElement != -1)
    {
        printf("Dequeued element: %d\n", dequeuedElement);
        // Traversing Queue
        traverseQueue(q);
    }
}

// Function to get the element at the front of the queue
void atFront(Queue *q)
{
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        int frontElement = q->arr[q->front + 1];
        printf("The element at the front of this Queue is: %d\n", frontElement);
    }
}

// Function to get the element at the rear of the queue
void atRear(Queue *q)
{
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }
    else
    {
        int rearElement = q->arr[q->rear];
        printf("The element at the rear of this Queue is: %d\n", rearElement);
    }
}

// Function to peek at an element at a specific position in the queue
void peek(Queue *q, int position)
{
    if (isEmpty(q))
    {
        printf("This Queue is empty\n");
    }

    else if (position > q->front && position <= q->rear)
    {
        int elementAtPosition = q->arr[position]; 
        printf("The element at position %d of this Queue is: %d\n", position, elementAtPosition);
    }
    else
    {
        printf("Invalid position\n");
    }
}

int main()
{
    // Allocating memory for Queue
    Queue *q = (Queue *)malloc(sizeof(Queue));

    // Initializing Queue
    q->front = q->rear = -1;
    q->size = 100;
    q->arr = (int *)malloc(q->size * sizeof(int));

    // Error handling for memory allocation
    if (!q->arr)
    {
        printf("Memory Error!");
        return 0;
    }

    // Enqueueing elements
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);

    // Dequeueing elements
    dequeue(q);

    // At front value
    atFront(q);

    // At rear value
    atRear(q);

    // Peek value
    peek(q, 0);

    // Free allocated memory
    free(q->arr);
    free(q);

    return 0;
}
