/*
    Stack Implementation Using Array

    This C program demonstrates the implementation of a stack using an array.
    It includes functions to check if the stack is empty or full and provides a basic example of pushing an element into the stack.

    Note: Memory allocation checks are included for robust error handling.
*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for the stack
struct Stack {
    int size;   // Size of the stack
    int top;    // Index of the top element
    int *arr;   // Array to store stack elements
};

typedef struct Stack stack;

// Function to check if the stack is empty
int isEmpty(stack *ptr) {
    if (ptr->top == -1) {
        printf("Stack is empty\n");
        return 1;
    } else {
        return 0;
    }
}

// Function to check if the stack is full
int isFull(stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        printf("Stack is full\n");
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Create a stack using dynamic memory allocation
    stack *s = (stack *)malloc(sizeof(stack));

    // Check if memory allocation was successful
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    s->size = 80;   // Set the size of the stack
    s->top = -1;    // Initialize top to -1 (indicating an empty stack)
    
    // Allocate memory for the stack array
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Check if memory allocation was successful
    if (s->arr == NULL) {
        printf("Memory allocation failed\n");
        free(s); // Free the previously allocated memory for the stack structure
        return 1; // Exit the program with an error code
    }

    // Manually push an element into the stack
    s->arr[0] = 7;
    s->top++;

    // Check if the stack is empty or not
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Free the allocated memory for the stack
    free(s->arr);
    free(s);

    return 0;
}
