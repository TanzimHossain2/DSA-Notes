# Double-Ended Queue (DE-Queue) in Data Structure

Don't be confused with the name. It is also known as **Deque**.

FIFO principle is followed in Queue. But in DE-Queue, we can insert and delete elements from both sides (Front + Rear). So, it is called Double-Ended Queue.

## Two Types of DE-Queue:- Double-Ended Queue

### 1. Restricted Input DE-Queue
In input-restricted queue, insertion operation can be performed at only one end, while deletion can be performed from both ends.

In this type of DE-Queue, we can insert elements from only one side (Rear), Insertion from Front not allowed, and delete elements from both sides (Front + Rear).

<div style="background-color: white; display: inline-block;">
    <img src="https://static.javatpoint.com/ds/images/ds-deque2.png" alt="Insertion at the Front End" style="background-color: white;">
</div>

### 2. Restricted Output DE-Queue
In output-restricted queue, deletion operation can be performed at only one end, while insertion can be performed from both ends.

In this type of DE-Queue, we can insert elements from both sides (Front + Rear) and delete elements from only one side (Front), Deletion from Rear not allowed.

![Restricted Output DE-Queue](https://static.javatpoint.com/ds/images/ds-deque3.png)

## DEQueue ADT:- Abstract Data Type

1. **Data:** Same as Queue
2. **Operations:**
    - Insertion at the front end. (InsertFront())
    - Insertion at the rear end. (InsertRear())
    - Deletion at the front end. (DeleteFront())
    - Deletion at the rear end (DeleteRear())
    - Get front end element (GetFront())
    - Get rear end element (GetRear())
    - Check if DE-Queue is empty (IsEmpty())
    - Check if DE-Queue is full (IsFull())
    - Initialize DE-Queue (Initialize())
    - Display DE-Queue (Display())

### Insertion at the Front End

In this operation, the element is inserted from the front end of the queue. Before implementing the operation, we first have to check whether the queue is full or not. If the queue is not full, then the element can be inserted from the front end by using the below conditions:

- If the queue is empty, both rear and front are initialized with 0. Now, both will point to the first element.
- Otherwise, check the position of the front if the front is less than 1 (front < 1), then reinitialize it by front = n - 1, i.e., the last index of the array.

![Insertion at the Front End](https://static.javatpoint.com/ds/images/ds-deque4.png)

### Insertion at the Rear End

In this operation, the element is inserted from the rear end of the queue. Before implementing the operation, we first have to check again whether the queue is full or not. If the queue is not full, then the element can be inserted from the rear end by using the below conditions:

- If the queue is empty, both rear and front are initialized with 0. Now, both will point to the first element.
- Otherwise, increment the rear by 1. If the rear is at the last index (or size - 1), then instead of increasing it by 1, we have to make it equal to 0.

![Insertion at the Rear End](https://static.javatpoint.com/ds/images/ds-deque5.png)

### Deletion at the Front End

In this operation, the element is deleted from the front end of the queue. Before implementing the operation, we first have to check whether the queue is empty or not.

- If the queue is empty, i.e., front = -1, it is the underflow condition, and we cannot perform the deletion. If the queue is not full, then the element can be inserted from the front end by using the below conditions:
  - If the deque has only one element, set rear = -1 and front = -1.
  - Else if front is at the end (that means front = size - 1), set front = 0.
  - Else increment the front by 1, (i.e., front = front + 1).

![Deletion at the Front End](https://static.javatpoint.com/ds/images/ds-deque6.png)

### Deletion at the Rear End

In this operation, the element is deleted from the rear end of the queue. Before implementing the operation, we first have to check whether the queue is empty or not.

- If the queue is empty, i.e., front = -1, it is the underflow condition, and we cannot perform the deletion.
- If the deque has only one element, set rear = -1 and front = -1.
- If rear = 0 (rear is at front), then set rear = n - 1.
- Else, decrement the rear by 1 (or, rear = rear -1).

<div style="background-color: white; display: inline-block;">
    <img src="https://static.javatpoint.com/ds/images/ds-deque7.png" alt="Deletion at the Rear End" style="background-color: white;">
</div>

## Time and Space Complexity

| Operations                  | Time Complexity | Space Complexity |
| --------------------------- | --------------- | ---------------- |
| Insertion at the Front End  | O(1)            | O(1)             |
| Insertion at the Rear End   | O(1)            | O(1)             |
| Deletion at the Front End   | O(1)            | O(1)             |
| Deletion at the Rear End    | O(1)            | O(1)             |
| Get Front End Element       | O(1)            | O(1)             |
| Get Rear End Element        | O(1)            | O(1)             |
| Check if DE-Queue is Empty  | O(1)            | O(1)             |
| Check if DE-Queue is Full   | O(1)            | O(1)             |
| Initialize DE-Queue         | O(1)            | O(1)             |
| Display DE-Queue            | O(n)            | O(1)             |

## Applications of DE-Queue

- Deque can be used as both stack and queue, as it supports both operations.
- Deque is used in implementing graphs and trees.
- Deque is also used in implementing breadth-first search and depth-first search.

Feel free to contribute, ask questions, or provide feedback. Happy coding! 😊
