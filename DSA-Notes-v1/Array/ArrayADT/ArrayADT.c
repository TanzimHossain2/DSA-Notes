/* =====================================================================
    Dynamic Array Abstract Data Type (ADT) in C

    This program defines an Abstract Data Type (ADT) for a dynamic array.
    The myArray structure represents the array, including total size,
    used size, and a pointer to the array.

    Functions:
    - createArray: Initializes the array with a specified total size and used size.
    - setValues: Accepts user input to set values for the array elements.
    - displayArray: Displays the elements of the array.

    Time Complexity:
    - createArray: O(1)
    - setValues: O(n)
    - displayArray: O(n)

    Space Complexity:
    - createArray: O(tSize)
    - setValues: O(1)
    - displayArray: O(1)
===================================================================== */

#include <stdio.h>
#include <stdlib.h>

// Structure representing the dynamic array ADT
struct myArray
{
    int total_size; // Total size of the array
    int used_size;  // Number of elements used in the array
    int *ptr;       // Pointer to the array
};

// Function to create a dynamic array
void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;

    // Allocate memory for the array
    int *ptr = (int *)malloc(tSize * sizeof(int));
    a->ptr = ptr;
}

// Function to display the elements of the dynamic array
void displayArray(struct myArray *a)
{
    printf("Array Elements:\n");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

// Function to set values for the dynamic array
void setValues(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

// Main function
int main()
{
    // Declare an instance of the myArray structure
    struct myArray marks;

    // Create a dynamic array with a total size of 10 and an initial used size of 2
    createArray(&marks, 10, 2);

    printf("Setting values for the array:\n");

    // Set values for the dynamic array
    setValues(&marks);

    printf("Displaying the array elements:\n");

    // Display the elements of the dynamic array
    displayArray(&marks);

    // Free the allocated memory before exiting
    free(marks.ptr);

    return 0;
}
