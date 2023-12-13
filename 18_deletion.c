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
    while (ptr != NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("--------------------\n");
}

//case 1: delete first node
void deleteFirst(Node * head){
Node * ptr = head;
head = head->next;
free(ptr);
printf("After deletion at Head\n");
traversal(head);
}

// case 2: delete at index
void deleteAtIndex(Node *head, int index){
    Node *p = head;
    for(int i = 0; i < index-1; i++){
        p = p->next;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    printf("After deletion at index\n");
    traversal(head);
}


int main() {
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = fifth;

    fifth->data = 77;
    fifth->next = NULL;

    //Before deletion
    printf("Before deletion\n");
    traversal(head);

    //After deletion
    deleteFirst(head);
    deleteAtIndex(head, 2);
    


    return 0;
}