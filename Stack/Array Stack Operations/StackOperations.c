/** ============================================================================
=                Stack Operations in C (Push, Pop, Peek )                   =

Push():
- 1st check if the stack is full
- if not full, then increment the top and add the element to the top position. like this:
    top = top + 1
    stack[top] = element
- return nothing

            ---------------------------------------------------------------------------

Pop():
- 1st check if the stack is empty
- if not empty, then remove the element from the top position and decrement the top. like this:
    element = stack[top]
    top = top - 1
- return the element

            ---------------------------------------------------------------------------

Peek():
- (top-i+1)

Explanation for Peek():
- The Peek function retrieves an element from the stack at a specified position from the top.
- The formula used is (top-i+1), where 'i' represents the position from the top.
- For example, peek(s, 1) would retrieve the top element, peek(s, 2) the second element from the top, and so on.

============================================================================ */

#include<stdio.h> 
#include<stdlib.h>

//creating a stack
struct stack {
    int size;
    int top;
    int *arr;
};
typedef struct stack Stack;

//traversal function
void traversal(Stack *ptr) {
    printf("[");
    for(int i = 0; i <= ptr->top; i++) {
        printf("%d, ", ptr->arr[i]);
    }
    printf("]\n");
}

//case 1: check if the stack is empty
int isEmpty(Stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

//case 2: check if the stack is full
int isFull(Stack *ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

//case 3: push an element into the stack
void push(Stack * ptr, int val){
    if(isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = val; //adding the element to the top position
    }
}

//case 4: pop an element from the stack
int pop(Stack * ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }else {
        int val = ptr->arr[ptr->top]; //storing the top element in a variable
        ptr->top--; 
        return val;
    }
}

//case 5: peek an element from the stack
int peek(Stack *ptr, int indx){ //indx is the position from the top
    int arrIndex = ptr->top - indx + 1;
    if(arrIndex < 0 || arrIndex > ptr->top ){
        printf("Invalid position\n");
        return -1;
    }
    else {
        return ptr->arr[arrIndex]; //returning the element at the given position
    }
}

int main() {
    //creating a stack in heap memory 
    Stack *s = (Stack *)malloc(sizeof(Stack));

    //initializing the stack
    s->size = 10;
    s->top = -1; //stack is empty
    s->arr = (int *)malloc(s->size * sizeof(int)); //creating an array in heap memory

    //check Memory allocation was successful or not
    if(s->arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    //pushing elements into the stack
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);

    //after pushing the array
    printf("After pushing \n");
    traversal(s);

    //popping elements from the stack
    printf("\n");
    printf("Popped %d from the stack\n", pop(s));
    printf("Popped %d from the stack\n", pop(s));

    //after popping the array
    printf("\n After popping \n");
    traversal(s);

    //peeking an element from the stack
    printf("\n");
    printf("Peeked %d from the stack\n", peek(s, 1)); //peeking the 1st element from the top

    //printing all the elements of the stack
    printf("\n");
    for(int i = 1; i <= s->top + 1; i++)
    {
        printf("The value at position %d is %d\n", i, peek(s, i));
    }

    // free the allocated memory
    free(s->arr);
    free(s);
    return 0;
}
