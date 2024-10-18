/* ======================================================================================
    Array Deletion in C

    This program demonstrates the deletion of an element at a specified index
    in an array. It includes functions for array traversal and deletion.

    Functions:
    - displayArray: Displays the elements of an array.
    - deleteAtIndex: Deletes an element at a specified index in the array.

    Note: The array has a fixed capacity of 100 elements.
====================================================================================== */


#include <stdio.h>

// Function to display the elements of an array
void display(int arr[], int n)
{
    // Code for Traversal
    printf("Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

// Function to delete an element at a specified index in the array
void indDeletion(int arr[], int size, int index)
{
    // Check if the index is within bounds
    if (index < 0 || index >= size)
    {
        printf("Deletion Failed. Invalid index.\n");
        return;
    }

    // Code for Deletion
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Deletion Successful\n");
    return;
}

// Main function
int main()
{
    // Initialize an array with elements
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;

    // Display the array before deletion
    printf("Before Deletion\n");
    display(arr, size);

    // Specify the index for deletion
    int index = 3;

    // Delete the element at the specified index
    indDeletion(arr, size, index);

    // Update the size after deletion
    size -= 1;

    // Display the array after deletion
    printf("After Deletion\n");
    display(arr, size);

    return 0;
}
