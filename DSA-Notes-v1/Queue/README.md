# Queue

Queue is a FIFO (First In First Out) data structure used to store data in the order in which they occur. It finds applications in various scenarios such as CPU scheduling and disk scheduling.

## Imagination

Consider the scenario of buying a movie ticket. People stand in a queue, and the person at the front of the queue gets the ticket first and leaves the queue first. The Queue operates on the principle of First In First Out (FIFO).

## Queue ADT

**Data**:

To create a queue, two pointers are needed – one for insertion (to know where the new element will be inserted) and the other for deletion (to hold the address of the element to be deleted). Additionally, storage is needed to hold the elements.

- Storage container for data
- Insertion at the end of the queue
- Deletion at the beginning of the queue

**Methods**:

- enqueue() - Insertion
- dequeue() - Deletion
- first() - Returns the first element of the queue
- last() - Returns the last element of the queue
- peek(position) - Returns the element at the given position
- isEmpty() - Returns true if the queue is empty
- isFull() - Returns true if the queue is full
- size() - Returns the size of the queue
- display() - Displays the elements of the queue

**Note**:

Queue is not limited to counters. It can be implemented in various ways, such as using arrays, linked lists, stacks, or other ADTs.

---

## Implementation

```text
  1.  2.  3.  4.  5.  6.  7.  8.  9.  10.
  ^                                   ^
  |                                   |
frontIndex                          rearIndex
```

- insert (enqueue):
  - increment rearIndex
  - insert element at rearIndex
  - O(1) time complexity

- remove (dequeue):
  - remove element at frontIndex and increment frontIndex
  - first element -> frontIndex + 1
  - Rear element -> rearIndex

```text
Queue is empty when frontIndex == rearIndex
Queue is full when rearIndex == Size - 1
```

## Array Implementation

Array: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

```C
struct Queue {
    int frontIndex;
    int rearIndex;
    int size;
    int *arr;
};

int main() {
    // Allocate memory for the queue structure
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));

    // Initialize queue parameters
    q->size = 10;
    q->frontIndex = -1;
    q->rearIndex = -1;

    // Allocate memory for the array
    q->arr = (int *)malloc(sizeof(int) * q->size);

    // Free allocated memory before the program exits
    free(q->arr);
    free(q);

    return 0;  // Indicates successful program execution
}
```

- enqueue():

```C
void enqueue(struct Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    } else {
        q->rearIndex++;
        q->arr[q->rearIndex] = data;
    }
}
```

- dequeue():

```C
int dequeue(struct Queue *q) {
    int data = -1;

    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return data;
    } else {
        q->frontIndex++;
        data = q->arr[q->frontIndex];
    }
    return data;
}
```

### Time and Space Complexity
    | Operation | Time Complexity | Space Complexity |
    | --------- | --------------- | ---------------- |
    | Insertion | O(1)            | O(1)             |
    | Deletion  | O(1)            | O(1)             |
    | Access    | O(n)            | O(1)             |
    | Search    | O(n)            | O(1)             |

Feel free to customize the content as needed! Happy coding! 😊
