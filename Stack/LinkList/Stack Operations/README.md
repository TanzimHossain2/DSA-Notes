# Stack Operations

## Overview

This repository demonstrates various operations on a stack data structure implemented in C. A stack is a Last-In-First-Out (LIFO) data structure, where elements are added and removed from the same end, known as the top.

### Stack Structure

The stack is implemented using a linked list structure, where each element (node) contains data and a pointer to the next element in the stack.

## Operations and Sudo Code

1. [**isEmpty()**](#isempty): Checks if the stack is empty.

2. [**isFull()**](#isfull): Checks if the stack is full.

3. [**push()**](#push): Inserts a node at the top of the stack.

4. [**pop()**](#pop): Deletes a node from the top of the stack.

5. [**peek(int pos)**](#peek): Retrieves the element at a specified position in the stack.

   **Number of Moves Table:**

   | Position | Number of Moves |
   |----------|-----------------|
   |    1     |        0        |
   |    2     |        1        |
   |    3     |        2        |

6. [**stackTop()**](#stacktop): Returns the top element of the stack.

7. [**stackBottom()**](#stackbottom): Returns the bottom element of the stack.

## Time Complexity

The time complexity of the operations on the stack is as follows:

- **isEmpty()**: O(1)
- **isFull()**: O(1)
- **push()**: O(1)
- **pop()**: O(1)
- **peek(int pos)**: O(pos)
- **stackTop()**: O(1)
- **stackBottom()**: O(n) (where n is the number of elements in the stack)

## Diagram

A visual representation of the stack operations:

```plaintext
-----------------------------------
| 50 | 40 | 30 | 20 | <- Top
-----------------------------------
```

In the diagram, the top of the stack is on the left, and each element is represented with its data value.

## Operations Details

### 1. [isEmpty()](StackOperations.c#L59)

**Sudo Code:**

```c
int isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}
```

### 2. [isFull()](StackOperations.c#L67)

**Sudo Code:**

```c
int isFull(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        return 1;
    }
    return 0;
}
```

### 3. [push()](StackOperations.c#L78)

**Sudo Code:**

```c
struct node *ptr = (struct node *)malloc(sizeof(struct node));
if(isFull()){
    printf("Stack Overflow\n");
}
else{
    ptr->data = data;
    ptr->next = top;
    top = ptr;
}
```

### 4. [pop()](StackOperations.c#L98)

**Sudo Code:**

```c
struct node *ptr = top;
if(isEmpty()){
    printf("Stack Underflow\n");
}
else{
    top = top->next;
    int x = ptr->data;
    free(ptr);
    return x;
}
```

### 5. [peek(int pos)](StackOperations.c#L113)

**Sudo Code:**

```c
peek(int pos){
    struct node *ptr = top;
    for(int i = 0; (i < pos-1 && ptr != NULL); i++){
        ptr = ptr->next;
    }

    if(ptr != NULL){
        return ptr->data;
    }
    else{
        printf("Invalid Position\n");
        return -1;
    }
}
```

### 6. [stackTop()](StackOperations.c#L131)

**Sudo Code:**

```c
int stackTop(){
    if(isEmpty()){ 
        return -1;
    }
    else{
        return top->data;
    }
}
```

### 7. [stackBottom()](StackOperations.c#L140)

**Sudo Code:**

```c
int stackBottom(){
    if(isEmpty()){
        return -1;
    }
    else{
        struct node *ptr = top;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        return ptr->data;
    }
}
```

## Peek Operation Explanation

The `peek(int pos)` operation allows you to retrieve the element at a specified position in the stack. The function uses a pointer to traverse the stack to the desired position, and if the position is valid, it returns the data of that node.

**Example:**
Suppose the stack is `[20, 30, 40, 50]`, and you want to peek at position 2.

1. The pointer starts at the top of the stack.
2. It moves to the next node (position 1) and then to the next node (position 2).
3. The data of the node at position 2 (30) is returned.

**Number of Moves Table:**

| Position | Number of Moves |
|----------|-----------------|
|    1     |        0        |
|    2     |        1        |
|    3     |        2        |

This operation provides flexibility to access specific elements in the stack based on their positions.

Feel free to explore the code. Happy coding! 😊
