/*=========================================================================
    Array Insertion in C

    This program demonstrates the insertion of an element at a specified index
    in an array. It includes functions for array traversal and insertion.

    Functions:
    - display: Displays the elements of an array.
    - indInsertion: Inserts an element at a specified index in the array.
=========================================================================*/

#include <stdio.h>

// Function to display the elements of an array
void display(int arr[], int n)
{
    // Traversal code
    printf("Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// Function to insert an element at a specified index in the array
void indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // Check if the array is full
    if (size >= capacity)
    {
        printf("Insertion Failed. Array is full.\n");
        return;
    }
    else
    {
        // Shift elements to create space for the new element
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }

        // Insert the new element at the specified index
        arr[index] = element;

        printf("Insertion Successful\n");
        return;
    }
}

// Main function
int main()
{
    // Initialize an array with elements
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;

    // Display the array before insertion
    printf("Before Insertion\n");
    display(arr, size);

    // Specify the element and index for insertion
    int element = 45, index = 3;

    // Insert the element at the specified index
    indInsertion(arr, size, element, 100, index);

    // Update the size after insertion
    size += 1;

    // Display the array after insertion
    printf("After Insertion\n");
    display(arr, size);

    return 0;
}
