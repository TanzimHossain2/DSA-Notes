# Queue Using Linked List

A linked list consists of nodes, where the head is the first node, and the tail is the last node. The tail node points to null, and the head node points to the next node in the sequence. The last node points to null, indicating the end of the list.

![Linked List](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-45/Image_1.webp)

## Enqueue Operation

1. Check if there is space left in the heap for a new node.
2. If space is available, create a new node `n`, allocate memory in the heap, and set its data to the provided value.
3. Set the `next` member of the new node `n` to null.
4. If the queue is empty (both `front` and `rear` are null), set both `front` and `rear` to the new node `n`.
5. If the queue is not empty, set the `next` of the current `rear` to the new node `n`, and update `rear` to point to `n`.

Image of Enqueue:

- f = front, r = rear, n = new node

![Enqueue](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-45/Image_4.webp)

```c
void enqueue(Node* front, Node* rear, int x) {
    Node* ptr = new Node();
    ptr->data = x;
    ptr->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = ptr;
        return;
    }

    rear->next = ptr;
    rear = ptr;
}
```

### Enqueue Steps
1. Create a new node `ptr`.
2. Set the data of `ptr` to the value of `x`.
3. Set the `next` of `ptr` to null.
4. Check if the queue is empty.
5. If the queue is empty, set both `front` and `rear` to `ptr`.
6. If the queue is not empty, set the `next` of `rear` to `ptr` and update `rear` to `ptr`.

## Dequeue Operation

1. Check if the queue is not empty using the `isEmpty` function.
2. If the queue is empty, return -1. Otherwise, create a new node `ptr` and set it equal to the `front` node.
3. Store the data of the `front` node in some integer variable.
4. Update `front` to the next member of `front` and free the node `ptr`. Return the stored value.

Image of Dequeue:

- f = front, r = rear

![Dequeue](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-45/Image_5.webp)

```c
int dequeue(Node* front) {
    int val; // to store the value of the node to be deleted.
    Node* ptr = front;

    // check for Queue Empty
    front = front->next;
    val = ptr->data;
    free(ptr);
    return val;
}
```

### Dequeue Steps
1. Create a new node `ptr`.
2. Set the data of `ptr` to the value of `x`.
3. Set the `next` of `ptr` to null.

## Time and Space Complexity

| Operation | Time Complexity | Space Complexity |
| ---       | ---             | ---              |
| Enqueue   | O(1)            | O(1)             |
| Dequeue   | O(1)            | O(1)             |
| Peek      | O(1)            | O(1)             |
| Search    | O(n)            | O(1)             |
| Delete    | O(n)            | O(1)             |
| Space     | O(n)            | O(1)             |

## Applications of Queue

1. CPU scheduling, Disk Scheduling.
2. Asynchronous data transfer between two processes.
3. Synchronization in multi-threaded systems.
4. Call Center phone systems for handling incoming calls.
5. Handling interrupts in real-time systems.
6. Breadth-First Search (BFS) algorithm.
7. Implementation of radix sort.
8. Construction of Huffman codes.

If you have any doubts feel free to ask in the comments. Happy Coding! 😊
