/** ======================================================================= 
=                Stack Operations                               =   

    1. isEmpty
    2. isFull
    3. push
    4. pop
    5. peek
    6. stackTop
    7. stackBottom
    8. display
    ----------------------------------------------------------------

    
    

Note:  we use (**top) to pass the address of the top pointer (&top) to the function
      so that we can change the value of the top pointer in the function
      and the changes will be reflected in the main function as well.

      If we use (*top) then the changes will not be reflected in the main function
      because we are passing the value of the top pointer to the function
      and not the address of the top pointer. it just sends a copy of the top pointer to the function.

    [ *We can also use a Global variable to store the address of the top pointer.
    so that we don't have to pass the address of the top pointer to the function.
    We can create a global top pointer and store the address of the top pointer in it.

    struct Node *top = NULL;  // global top pointer 
    now it can be accessed by all the functions in the program, then no need to pass the address of the top pointer to the function and no need to use a double pointer (**top) in the function. 

    **!Important: be careful to use a global pointer, if you use then must be careful about naming the local pointer variable in the function. 
    ]

======================================================================= */


#include<stdio.h> 
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node Node; 

//case 8: display the stack
void traverse(Node *top){
    Node *p = top;
    printf("----------------\n");
    while(p != NULL){
        printf("%d, ", p->data);
        p = p->next;
    }
    printf("\n----------------\n");
}

//case 1: check if stack is empty
int isEmpty(Node *top){
    if(top == NULL){ // if top is NULL then stack is empty
        return 1;
    }
    return 0;
}

//case 2: check if stack is full
int isFull(Node *top){
    Node *p = (Node *)malloc(sizeof(Node)); // create a new node so that we can check if the memory is full or not

    if(p == NULL){ // if p is NULL then memory is full
        return 1;
    }
    free(p); // free the allocated memory
    return 0;
}

//case 3: push at the top
void push(Node **top, int data){ 
    if(isFull(*top)){
        printf("Stack Overflow\n");
    }else {
        Node *p = (Node*)malloc(sizeof(Node)); // create a new node so that we can push the data
        if (p == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
        p->data = data;
        p->next = *top;
        *top = p; // top is now pointing to the new node
    }

    printf("\nPushed %d\n", data);
    printf("After Pushing\n");
    traverse(*top);
}

//case 4: pop
void pop(Node **top){
    if(isEmpty(*top)){
        printf("Stack Underflow\n");
    }else {
        Node *p = *top; // create a new node so that we can pop the data and free the memory 
        int data = p->data;
        *top = (*top)->next; // top is now pointing to the next node 
        printf("\nPopped %d\n", data);
        free(p);
    }
    printf("After Popping\n");
    traverse(*top);
}

//case 5: peek in given position
void peek(Node *top, int pos){
    if (isEmpty(top)) {
        printf("Stack is Empty\n");
        return;
    }
    Node *ptr = top; // create a new node so that we can traverse the stack
    for(int i = 0; i < pos - 1 && ptr != NULL; i++){
        ptr = ptr->next;
    } // ptr is now pointing to the node at the given position

    if(ptr != NULL){
        printf("Peeked %d - at position [ %d ]\n", ptr->data, pos);
    }else {
        printf("Invalid Position\n");
    }
}

//case 6: stack top
int stackTop(Node *top){
    if(isEmpty(top)){
        printf("Stack is Empty\n");
        return -1;
    }else {
        return top->data; 
    }
}

//case 7: stack bottom
int stackBottom(Node *top){
    if(isEmpty(top)){
        printf("Stack is Empty\n");
        return -1;
    }else {
        Node *p = top; // create a new node so that we can traverse the stack
        while(p->next != NULL){
            p = p->next; // p is moving until it reaches the last node
        }
        return p->data;
    }
}

int main() {
    Node *top = NULL;

    push(&top, 20); // passing the address of the top pointer to the function, more info check the note above
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);

    pop(&top);

    peek(top, 2);

    /*
    // peek from 1 to 4 elements in the stack
    for (int i = 1; i <= 4; i++)
    {
        peek(top, i);
    }

    */

    printf("\n Stack Top: %d\n", stackTop(top));
    printf("Stack Bottom: %d\n", stackBottom(top));

    return 0;
}
