# Array Deletion in C

This C program illustrates the process of deleting an element at a specified index in an array. It includes functions for array traversal and deletion.

## Functions:-

1. **displayArray:**
   - Displays the elements of an array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1), constant space for the function.

2. **deleteAtIndex:**
   - Deletes an element at a specified index in the array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1), constant space for the function.

## Instructions:-

- The array used in this program has a fixed capacity of 100 elements.
- Ensure you have a basic understanding of array indexing before using this code.

## Usage:-

1. **Compile the code:**

   ```bash
   gcc deletionInArray.c -o deletionInArray
   ```

2. **Run the executable:**

   ```bash
   ./deletionInArray
   ```

3. **Follow the prompts:**
   - The program will display the array before and after the deletion.
   - Specify the index of the element you want to delete.

## Example:-

Before Deletion:

```
Array Elements:
7
8
12
27
88
```

After Deletion (index = 3):

```
Array Elements:
7
8
12
88
```

## Note:-

- The array size is adjusted after deletion.
- If an invalid index is provided, the program will print an error message.

Feel free to explore and modify the code for educational purposes. Happy coding!
