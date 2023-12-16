/** ============================================================================
=                         Stack Operations in C (Push, Pop, Peek)                  =

Push():
- Checks if the stack is full.
- If not full, increments the top and adds the element to the top position.
    top = top + 1
    stack[top] = element
- Returns nothing

-------------------------------------------------------------------------------

Pop():
- Checks if the stack is empty.
- If not empty, removes the element from the top position and decrements the top.
    element = stack[top]
    top = top - 1
- Returns the element

-------------------------------------------------------------------------------

Peek():
- (top-i+1)

Explanation for Peek():
- The Peek function retrieves an element from the stack at a specified position from the top.
- The formula used is (top-i+1), where 'i' represents the position from the top.
- For example, peek(s, 1) would retrieve the top element, peek(s, 2) the second element from the top, and so on.

============================================================================ */

#include<stdio.h> 
#include<stdlib.h>

// Creating a stack
struct stack {
    int size;
    int top;
    int *arr;
};
typedef struct stack Stack;

// Traversal function
void traversal(Stack *ptr) {
    printf("[");
    for(int i = 0; i <= ptr->top; i++) {
        printf("%d, ", ptr->arr[i]);
    }
    printf("]\n");
}

// Case 1: Check if the stack is empty
int isEmpty(Stack *ptr) {
    return ptr->top == -1;
}

// Case 2: Check if the stack is full
int isFull(Stack *ptr) {
    return ptr->top == ptr->size - 1;
}

// Case 3: Push an element into the stack
void push(Stack *ptr, int val){
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = val; // Adding the element to the top position
    }
}

// Case 4: Pop an element from the stack
int pop(Stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top]; // Storing the top element in a variable
        ptr->top--; 
        return val;
    }
}

// Case 5: Peek an element from the stack
int peek(Stack *ptr, int indx){ // indx is the position from the top
    int arrIndex = ptr->top - indx + 1;
    if(arrIndex < 0 || arrIndex > ptr->top ){
        printf("Invalid position\n");
        return -1;
    } else {
        return ptr->arr[arrIndex]; // Returning the element at the given position
    }
}

int main() {
    // Creating a stack in heap memory 
    Stack *s = (Stack *)malloc(sizeof(Stack));

    // Initializing the stack
    s->size = 10;
    s->top = -1; // Stack is empty
    s->arr = (int *)malloc(s->size * sizeof(int)); // Creating an array in heap memory

    // Check if memory allocation was successful or not
    if(s->arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Pushing elements into the stack
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);

    // After pushing the array
    printf("After pushing \n");
    traversal(s);

    // Popping elements from the stack
    printf("\n");
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));

    // After popping the array
    printf("\n After popping \n");
    traversal(s);

    // Peeking an element from the stack
    printf("\n");
    printf("Peeked %d from the stack\n", peek(s, 1)); // Peeking the 1st element from the top

    // Printing all the elements of the stack
    printf("\n");
    for(int i = 1; i <= s->top + 1; i++) {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    // Free the allocated memory
    free(s->arr);
    free(s);
    return 0;
}
