/*================================================================
* Filename: Count_Sort.c

* Description: Implementation of Counting Sort in C

* Algorithm: Counting Sort

* Comments: This program demonstrates the Counting Sort algorithm in C.

* Readability: High
=================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to print an array
void printArray(int A[], int n)
{
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n--------------------\n");
}

// Function to find the maximum element in the array
int max(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

// Function to perform Counting Sort
void countSort(int A[], int n)
{
    int maxElement = max(A, n);
    int *count = (int *)calloc(maxElement + 1, sizeof(int)); // calloc initializes all elements to 0

    // Increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++; // count occurrences of each element
    }

    int i = 0; // index for the count array
    int j = 0; // index for the original array

    // Reconstruct the sorted array based on the count array
    while (i <= maxElement)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }

    printf("Sorted Array: ");
    printArray(A, n);
}

int main()
{
    int arr[] = {1, 4, 1, 2, 7, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    countSort(arr, n);

    return 0;
}
