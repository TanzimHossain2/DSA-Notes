/*================================================================
* Filename: Double-Ended_Queue.c

* Description: Implementation of Double-Ended Queue (DE-Queue) in C.

* Algorithm: The code implements operations for a DE-Queue, including
  insertion and deletion at both the front and rear ends.

* Comments: The code uses a structure to define a node in the DE-Queue.
  It includes functions for insertion, deletion, peeking, and displaying
  the DE-Queue.

* Issues: None.

* Readability: The code is structured with clear comments and indentation
  to enhance readability.

=================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the DE-Queue
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to check if the DE-Queue is empty
int isEmpty(Node* front, Node* rear) {
    return front == NULL && rear == NULL;
}

// Function to insert at the front end of the DE-Queue
void insertFront(Node** front, Node** rear, int data) {

    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node

    // Check if memory allocation was successful
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize the new node
    newNode->data = data;
    newNode->next = NULL;

    // Check if the DE-Queue is empty
    if (isEmpty(*front, *rear)) {
        *front = *rear = newNode;
    } else {
        newNode->next = *front;
        *front = newNode;
    }

    printf("Inserted %d at the front end\n", data);
}

// Function to insert at the rear end of the DE-Queue
void insertRear(Node** front, Node** rear, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Allocate memory for the new node

    // Check if memory allocation was successful
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }

    // Initialize the new node
    newNode->data = data;
    newNode->next = NULL;

    // Check if the DE-Queue is empty
    if (isEmpty(*front, *rear)) {
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }

    printf("Inserted %d at the rear end\n", data);
}

// Function to delete from the front end of the DE-Queue
int deleteFront(Node** front, Node** rear) {
    int val = -1;

    if (isEmpty(*front, *rear)) {
        printf("DE-Queue is empty\n");
    } else {
        Node* temp = *front;
        val = temp->data;

        if (*front == *rear) {
            *front = *rear = NULL;
        } else {
            *front = (*front)->next;
        }

        free(temp);
        printf("Deleted %d from the front end\n", val);
    }

    return val;
}

// Function to delete from the rear end of the DE-Queue
int deleteRear(Node** front, Node** rear) {
    int val = -1;

    if (isEmpty(*front, *rear)) {
        printf("DE-Queue is empty\n");
    } else {
        Node* temp = *front;
        val = (*rear)->data;

        if (*front == *rear) {
            *front = *rear = NULL;
        } else {
            while (temp->next != *rear) {
                temp = temp->next;
            }

            temp->next = NULL;
            *rear = temp;
        }

        printf("Deleted %d from the rear end\n", val);
    }

    return val;
}

// Function to display the DE-Queue
void display(Node* front) {
    printf("DE-Queue: [");
    while (front != NULL) {
        printf("%d, ", front->data);
        front = front->next;
        
    }
    printf("]\n");

    printf("--------------------\n");
}

int main() {
    Node* front = NULL;
    Node* rear = NULL;

    printf("Before inserting\n");
    display(front);

    insertFront(&front, &rear, 10);
    insertRear(&front, &rear, 20);
    insertFront(&front, &rear, 5);

    printf("\nAfter inserting\n");
    display(front);

    deleteFront(&front, &rear);
    deleteRear(&front, &rear);

    printf("\nAfter deleting\n");
    display(front);

    return 0;
}
