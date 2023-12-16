# Dynamic Array Abstract Data Type (ADT)

This folder contains the code for implementing an Abstract Data Type (ADT) for a dynamic array in C. The dynamic array is represented by a structure named `myArray`, which includes the total size, used size, and a pointer to the array. The ADT also includes functions to initialize, set values, and display elements of the dynamic array.

## Files:-

1. **ArrayADT.c:**
   - **Description:** Defines an ADT for a dynamic array with functions to initialize, set values, and display  elements.
   - **Functions:**
     - `createArray`: Initializes the array with a specified total size and used size.
     - `setValues`: Accepts user input to set values for the array elements.
     - `displayArray`: Displays the elements of the array.
   - **Time Complexity:**
     - `createArray`: O(1)
     - `setValues`: O(n)
     - `displayArray`: O(n)
   - **Space Complexity:**
     - `createArray`: O(tSize)
     - `setValues`: O(1)
     - `displayArray`: O(1)

## Usage:-

1. **Compile:**

   ```bash
   gcc ArrayADT.c -o ArrayADT
   ```

2. **Run:**

   ```bash
   ./ArrayADT
   ```

3. **Output:**
   - The program will prompt you to set values for the dynamic array.
   - It will then display the entered array elements.

## Example:-

Consider a dynamic array with a total size of 10 and an initial used size of 2.

```c
// Create an array with a total size of 10 and an initial used size of 2
createArray(&marks, 10, 2);

// Set values for the array
setValues(&marks);

// Display the array elements
displayArray(&marks);
```

Feel free to explore and modify the code for educational purposes.

Happy coding!
