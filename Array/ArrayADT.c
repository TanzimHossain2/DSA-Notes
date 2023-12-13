/*
    Abstract Data Type (ADT) for Dynamic Arrays in C

    This program defines an ADT for a dynamic array. The array is represented
    by a structure named myArray, which includes the total size, used size, and a
    pointer to the array.

    Functions:
    - createArray: Initializes the array with a specified total size and used size.
    - setVal: Accepts user input to set values for the array elements.
    - show: Displays the elements of the array.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure representing the array ADT
struct myArray
{
    int total_size; // Total size of the array
    int used_size;  // Number of elements used in the array
    int *ptr;       // Pointer to the array
};

// Function to create an array
void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;

    // Allocate memory for the array
    int *ptr = (int *)malloc(tSize * sizeof(int));
    a->ptr = ptr;
}

// Function to display the elements of the array
void show(struct myArray *a)
{
    printf("Array Elements:\n");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

// Function to set values for the array
void setVal(struct myArray *a)
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

    // Create an array with a total size of 10 and an initial used size of 2
    createArray(&marks, 10, 2);

    printf("Setting values for the array:\n");

    // Set values for the array
    setVal(&marks);

    printf("Displaying the array elements:\n");

    // Display the elements of the array
    show(&marks);

    // Free the allocated memory before exiting
    free(marks.ptr);

    return 0;
}
