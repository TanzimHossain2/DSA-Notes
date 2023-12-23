# Circular Queue

## Drawbacks of Queue using Array

- **Linear Structure Limitation:** A queue, operating on the First In First Out (FIFO) principle, has a key disadvantage when implemented using an array — a fixed size. This necessitates knowledge of the maximum element limit in advance, restricting dynamic scalability.

- **Unused Space Dilemma:** An additional drawback arises when the queue is full. Despite potential space at the front, elements cannot be added, leading to inefficient use of available memory.

![Circular Queue](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-42/Image_1.webp)

## Circular Queue: Overcoming Limitations

The Circular Queue introduces a solution to the fixed size issue. When `front` and `rear` both reach 0, indicating an empty queue, elements can be inserted. However, continuous insertions and deletions may lead to a situation where the `rear` reaches the end of the queue. At this point, the `front` also reaches the end, causing a conundrum as `front = rear + 1`, signifying a full queue. Despite available space at the front, it remains inaccessible. Circular Queue solves this by resetting `front` and `rear` when they reach the end, allowing the reuse of the front space.

**Example**:

Consider an array `arr[] = {6, 7, 8, 9, 10}`.

1. **Initialization:**
   - Initially, assume `front = rear = 0`, indicating an empty queue.
   - This configuration allows the insertion of elements into the queue.

2. **Insertions:**
   - After inserting 6, the state becomes `front = 0, rear = 1`.
   - Following the insertion of 7, the state is now `front = 0, rear = 2`.
   - Subsequent insertions progress as follows:
     - After inserting 8, the state is `front = 0, rear = 3`.
     - After inserting 9, the state is `front = 0, rear = 4`.
     - After inserting 10, the state is `front = 0, rear = 5`.

3. **Reaching the End:**
   - At this point, the `rear` has reached the end of the queue (`rear = 5`).
   - When a deletion operation is performed, `front` will catch up and also reach the end of the queue.

4. **Queue Full Scenario:**
   - Now, we face a dilemma. Despite available space at the front of the queue, we can't insert elements.
   - This is because `front = rear + 1`, indicating a full queue.
   - The space in front of the queue remains unused, creating an inefficiency.

5. **Circular Queue Solution:**
   - To overcome this problem, Circular Queue is employed.
   - Circular Queue resets the positions of `front` and `rear` when they reach the end, allowing the reuse of the space in front of the queue.
   - This resetting mechanism ensures continuous operations and efficient space utilization.

6. **Resetting `front` and `rear`:**
    - When `front` and `rear` reach the end of the queue, they are reset to 0.
    - This allows the reuse of the space in front of the queue.
    - The `front` and `rear` are reset to 0, and the queue is now ready to accept new elements.

7. **Insertions:**
    - After inserting 11, the state becomes `front = 0, rear = 1`.
    - Following the insertion of 12, the state is now `front = 0, rear = 2`.
    - Subsequent insertions progress as follows:
      - After inserting 13, the state is `front = 0, rear = 3`.
      - After inserting 14, the state is `front = 0, rear = 4`.
      - After inserting 15, the state is `front = 0, rear = 5`.

8. **Deletions:**
    - After deleting 11, the state becomes `front = 1, rear = 5`.
    - Following the deletion of 12, the state is now `front = 2, rear = 5`.
    - Subsequent deletions progress as follows:
      - After deleting 13, the state is `front = 3, rear = 5`.
      - After deleting 14, the state is `front = 4, rear = 5`.
      - After deleting 15, the state is `front = 5, rear = 5`.

10.**.....Going on like this.**

## Visual Representation of Circular Queue

![Circular Queue](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-42/Image_5.webp)

## Implementation of Circular Queue

Consider an array `arr[] = {6, 7, 8, 9, 10}`.

```text
i = i + 1;  // Linear increment. Example: when i = 4, then i = 4 + 1 = 5

i = (i + 1) % size;  // Circular increment. Example: when i = 4, size = 5, then i = (4 + 1) % 5 = 0
```

Circular Queue is full when `(rear + 1) % size = front`.

Circular Queue is empty when `front = rear`.

### Time and Space Complexity

    | Operation | Time Complexity | Space Complexity |
    | --------- | --------------- | ---------------- |
    | Insertion | O(1)            | O(1)             |
    | Deletion  | O(1)            | O(1)             |
    | Access    | O(1)            | O(1)             |
    | Search    | O(n)            | O(1)             |

Feel free to customize the content as needed! Happy coding! 😊
