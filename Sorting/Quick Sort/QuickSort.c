/*================================================================
* Filename:  QuickSort.c

* Description: Implementation of the Quick Sort algorithm in C

* Algorithm:
    - Choose a pivot element from the array.
    - Partition the array into two subarrays: elements less than or equal to the pivot, and elements greater than the pivot.
    - Recursively apply Quick Sort to both subarrays.

* Comments: This code demonstrates the Quick Sort algorithm on an array of integers.

* Readability: The code is written with clarity to aid in understanding.

=================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Function to print an array
void printArray(int A[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d, ", A[i]);
    }
    printf("] \n");
    printf("-------------------- \n");
}

// Partition function
int partition(int A[], int low, int high) {
    int pivot = A[low]; // Choose the first element as the pivot
    int i = low + 1;    // Index of smaller element
    int j = high;       // Index of higher element
    int temp;           // Temporary variable

    do {
        while (A[i] <= pivot) {
            i++;
        }
        while (A[j] > pivot) {
            j--;
        }
        if (i < j) {
            // Swap elements at indices i and j
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap pivot element with the element at index j
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

// Quick Sort function
void QuickSort(int A[], int low, int high) {
    int partitionIndex; // Index of pivot after partition

    if (low < high) {
        partitionIndex = partition(A, low, high);
        // Recursively sort the left and right subarrays
        QuickSort(A, low, partitionIndex - 1);
        QuickSort(A, partitionIndex + 1, high);
    }
}

int main() {
    int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int n = sizeof(A) / sizeof(A[0]);

    printf("Before sorting: \n");
    printArray(A, n);

    QuickSort(A, 0, n - 1);

    printf("After sorting: \n");
    printArray(A, n);

    return 0;
}
