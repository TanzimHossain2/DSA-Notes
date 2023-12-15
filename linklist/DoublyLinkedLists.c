// Doubly Linked List Implementation in C

// Structure representing a node in the doubly linked list
struct Node
{
    int data;           // Data of the node
    struct Node *next;  // Pointer to the next node in the list
    struct Node *prev;  // Pointer to the previous node in the list
};

typedef struct Node Node;

// Function to traverse and print the elements of the doubly linked list
void traversal(Node *head)
{
    // Note: This function traverses the doubly linked list and prints its elements.
    // It starts from the head and moves to the end of the list.
    printf("--------------------\n");
    while (head != NULL)
    {
        printf("Elements are: %d\n", head->data);
        head = head->next;
    }
    printf("--------------------\n");
}

// Function to insert a new node at the beginning of the doubly linked list
void insertAtBeginning(Node **head, int data)
{
    // Note: This function inserts a new node at the beginning of the doubly linked list.
    // It creates a new node, sets its data, and adjusts pointers accordingly.
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = *head;
    ptr->prev = NULL;

    if (*head != NULL)
    {
        (*head)->prev = ptr;
    }

    *head = ptr;

    // Printing the elements after insertion
    printf("After insertion at the beginning\n");
    traversal(*head);
}

// Function to insert a new node at the end of the doubly linked list
void insertAtEnd(Node *head, int data)
{
    // Note: This function inserts a new node at the end of the doubly linked list.
    // It creates a new node, sets its data, and adjusts pointers accordingly.
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = NULL;

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;

    // Printing the elements after insertion
    printf("After insertion at the end\n");
    traversal(head);
}

// Main function demonstrating the doubly linked list
int main()
{
    // Creating a doubly linked list with five nodes and Allocate them in the heap
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));
    Node *fifth = (Node *)malloc(sizeof(Node));

    // Setting data and pointers for each node
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    second->data = 11;
    second->next = third;
    second->prev = head;

    third->data = 41;
    third->next = fourth;
    third->prev = second;

    fourth->data = 66;
    fourth->next = fifth;
    fourth->prev = third;

    fifth->data = 77;
    fifth->next = NULL;
    fifth->prev = fourth;

    // Traversal
    traversal(head);

    // Insertion at the beginning
    insertAtBeginning(&head, 99);

    // Insertion at the end
    insertAtEnd(head, 55);

    return 0;
}
