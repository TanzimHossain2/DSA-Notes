# Array Insertion in C

This C program showcases the insertion of an element at a specified index in an array. The code includes functions for array traversal and insertion.

## Functions:-

1. **displayArray:**
   - Displays the elements of an array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1), constant space for the function.

2. **insertAtIndex:**
   - Inserts an element at a specified index in the array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1), constant space for the function.

## Instructions:-

- The array used in this program has a fixed capacity of 100 elements.
- Ensure you have a basic understanding of array indexing before using this code.

## Usage:-

1. **Compile the code:**

   ```bash
   gcc insertionInArray.c -o insertionInArray
   ```

2. **Run the executable:**

   ```bash
   ./insertionInArray
   ```

3. **Follow the prompts:**
   - The program will display the array before and after the insertion.
   - Specify the element and index for insertion.

## Example:-

Before Insertion:-

```
Array Elements:
7
8
12
27
88
```

After Insertion (element = 45, index = 3):
```
Array Elements:
7
8
12
45
27
88
```

## Note:-

- The array size is adjusted after insertion.
- If the array is full, the program will print an error message.

Feel free to let me know if there's anything you'd like to modify or add! Happy coding! 😊
