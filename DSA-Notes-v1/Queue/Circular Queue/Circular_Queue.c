/*=====================================================================
* Program Name : Circular_Queue.c
* Description : Implementation of a Circular Queue in C.
* Note        : This program demonstrates the implementation of a Circular Queue,
*               a data structure with a circular arrangement, allowing efficient
*               use of memory and overcoming the limitations of a linear queue.
* Algorithm   : Circular Queue operations with circular increment for front and rear.
=====================================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct circularQueue
{
    int front;
    int rear;
    int size;
    int *arr;
} CQueue;

// Function to check if the queue is full
int isFull(CQueue *q)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        return 1; // Full
    }
    else
    {
        return 0; // Not full
    }
}

// Function to check if the queue is empty
int isEmpty(CQueue *q)
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
void traverseQueue(CQueue *q)
{
    if (isEmpty(q))
    {
        printf("This Circular Queue is empty\n");
    }
    else
    {
        printf("The elements of the Circular Queue are: [ ");
        int i = (q->front + 1) % q->size; // Start from front+1 in circular manner
        do
        {
            printf("%d, ", q->arr[i]);
            i = (i + 1) % q->size; // Circular increment
        } while (i != (q->rear + 1) % q->size);
        printf("]\n--------------------------\n");
    }
}

// Function to enqueue an element into the queue
void enqueue(CQueue *q, int data)
{
    if (isFull(q))
    {
        printf("This Circular Queue is full\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size; // Circular increment
        q->arr[q->rear] = data;
        printf("Enqueued element: %d\n", data);
        // Traversing Circular Queue
        traverseQueue(q);
    }
}

// Function to dequeue an element from the queue
void dequeue(CQueue *q)
{
    int dequeuedElement = -1;

    if (isEmpty(q))
    {
        printf("This Circular Queue is empty\n");
    }
    else
    {
        q->front = (q->front + 1) % q->size; // Circular increment
        dequeuedElement = q->arr[q->front];
    }

    if (dequeuedElement != -1)
    {
        printf("Dequeued element: %d\n", dequeuedElement);
        // Traversing Circular Queue
        traverseQueue(q);
    }
}

// Function to get the element at the front of the queue
void atFront(CQueue *q)
{
    if (isEmpty(q))
    {
        printf("This Circular Queue is empty\n");
    }
    else
    {
        int frontElement = q->arr[(q->front + 1) % q->size]; // Circular increment
        printf("The element at the front of this Circular Queue is: %d\n", frontElement);
    }
}

// Function to get the element at the rear of the queue
void atRear(CQueue *q)
{
    if (isEmpty(q))
    {
        printf("This Circular Queue is empty\n");
    }
    else
    {
        int rearElement = q->arr[q->rear];
        printf("The element at the rear of this Circular Queue is: %d\n", rearElement);
    }
}

// Function to peek at an element at a specific position in the queue
void peek(CQueue *q, int position)
{
    if (isEmpty(q))
    {
        printf("This Circular Queue is empty\n");
    }
    else if (position >= 0 && position < (q->rear - q->front + q->size) % q->size)
    {
        int peekIndex = (q->front + position + 1) % q->size;
        int elementAtPosition = q->arr[peekIndex];
        printf("The element at position %d of this Circular Queue is: %d\n", position, elementAtPosition);
    }
    else
    {
        printf("Invalid position\n");
    }
}

int main()
{
    // Allocating memory for Circular Queue
    CQueue *q = (CQueue *)malloc(sizeof(CQueue));

    // Initializing Circular Queue
    q->front = q->rear = 0;
    q->size = 6; // Adjust the size as needed
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
    dequeue(q);

    // Enqueueing elements
    enqueue(q, 60);
    enqueue(q, 70);

    // At front value
    atFront(q);

    // At rear value
    atRear(q);

    // Peek value
    peek(q, 2);

    // Free allocated memory
    free(q->arr);
    free(q);

    return 0;
}
