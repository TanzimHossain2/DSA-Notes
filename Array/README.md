# Array Operations in C

This repository contains C code for various array operations, including Array ADT (Abstract Data Type), Deletion, and Insertion. Each operation is organized into separate folders for clarity.

## 1. Array ADT

### Overview:-

The `ArrayADT.c` file in this folder defines an Abstract Data Type (ADT) for a dynamic array. The array is represented by a structure named `myArray`, which includes the total size, used size, and a pointer to the array.

### Functions:-

1. **createArray:**
   - Initializes the array with a specified total size and used size.
   - **Time Complexity:** O(1)
   - **Space Complexity:** O(tSize), where tSize is the total size of the array.

2. **setVal:**
   - Accepts user input to set values for the array elements.
   - **Time Complexity:** O(uSize), where uSize is the used size of the array.
   - **Space Complexity:** O(1)

3. **show:**
   - Displays the elements of the array.
   - **Time Complexity:** O(uSize), where uSize is the used size of the array.
   - **Space Complexity:** O(1)

### Example Usage:

```c
// Example usage of Array ADT
#include <stdio.h>
#include <stdlib.h>

// ... (refer to ArrayADT.c for the full example)
```

## 2. Deletion Operation

### Overview:

The `deletionInArray.c` file demonstrates the deletion of an element at a specified index in an array.

### Functions:

1. **display:**
   - Displays the elements of an array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1)

2. **indDeletion:**
   - Deletes an element at a specified index in the array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1)

### Example Usage:

```c
// Example usage of Deletion Operation
#include <stdio.h>

// ... (refer to deletionInArray.c for the full example)
```

## 3. Insertion Operation

### Overview:

The `insertionInArray.c` file demonstrates the insertion of an element at a specified index in an array.

### Functions:

1. **display:**
   - Displays the elements of an array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1)

2. **indInsertion:**
   - Inserts an element at a specified index in the array.
   - **Time Complexity:** O(n), where n is the number of elements in the array.
   - **Space Complexity:** O(1)

### Example Usage:

```c
// Example usage of Insertion Operation
#include <stdio.h>

// ... (refer to insertionInArray.c for the full example)
```

Feel free to customize the content as needed!