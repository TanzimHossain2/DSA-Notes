/*================================================================
* Filename: Selection_Sort.c

* Description: This program demonstrates the Selection Sort algorithm to
*               sort an array in ascending order.

* Algorithm: Selection Sort
    1. Set minIndex to the first location.
    2. Search for the minimum element in the unsorted portion of the array.
    3. Swap the minimum element with the first element of the unsorted portion.
    4. Move the starting point of the unsorted portion to the next element.
    5. Repeat steps 2-4 until the entire array is sorted.

* Comments: The selectionSort function takes an array and its size as input and
*            sorts the array in-place using the Selection Sort algorithm.

* Readability: The code is structured with functions to improve readability.
=================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Function to print an array
void printArray(int A[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", A[i]);
    }
    printf("] \n");
    printf("-------------------- \n");
}

// Function to swap two elements
void selectionSort(int Arr[], int n)
{
    int minIndex; // Index of the minimum element

    // Iterate through the array
    for (int i = 0; i < n - 1; i++)
    {
        minIndex = i; // set the first element as the minimum
        for (int j = i + 1; j < n; j++)
        {
            // Update minIndex if a smaller element is found
            if (Arr[j] < Arr[minIndex])
            {
                // Update minIndex if a smaller element is found
                minIndex = j;
            }
        }

        // Swap the elements
        int temp = Arr[i];
        Arr[i] = Arr[minIndex];
        Arr[minIndex] = temp;

        printf("After pass %d: \n", i + 1);
        printArray(Arr, n);
    }

    printf("After Sorting: \n");
    printArray(Arr, n);
}

int main()
{
    // Input Array
    int arr[] = {3, 5, 2, 13, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting: \n");
    printArray(arr, n);

    // Perform Selection Sort
    selectionSort(arr, n);

    return 0;
}
