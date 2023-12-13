#include<stdio.h> 
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void LinkListTraversal(struct Node *ptr) {
    struct Node *temp = ptr;

    while (temp->next !=NULL){
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
    printf("Element: %d\n", temp->data);
  
}

void  traversal(struct Node *ptr){
    
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
    ptr = ptr->next;
    }
    
}

int main() {
    //Allocate memory for nodes in the linked list in Heap
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    //Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    //Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    // LinkListTraversal(head);
    traversal(head);

    return 0;
}