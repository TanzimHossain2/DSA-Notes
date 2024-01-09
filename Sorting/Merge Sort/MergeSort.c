/*================================================================
* Filename: MergeSort.c
* Description: Implementation of Merge Sort algorithm in C
* Algorithm: Merge Sort
* Comments: The program demonstrates the Merge Sort algorithm for sorting an array.
* Readability: High
=================================================================*/

#include <stdio.h>
#include <stdlib.h>

// Function to print an array
void printArray(int A[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n--------------------\n");
}

// Function to merge two halves of an array
void merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1]; // temporary array to store the sorted array

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            temp[k++] = A[i++];
        } else {
            temp[k++] = A[j++];
        }
    }

    // Copy the remaining elements from the first half
    while (i <= mid) {
        temp[k++] = A[i++];
    }

    // Copy the remaining elements from the second half
    while (j <= high) {
        temp[k++] = A[j++];
    }

    // Copy the sorted array back to the original array
    for (i = low, k = 0; i <= high; i++, k++) {
        A[i] = temp[k];
    }
}

// Function to perform Merge Sort
void MergeSort(int A[], int low, int high) {
    int mid;
    if (low < high) {
         mid = (low + high) / 2;

        // Recursively sort the two halves
        MergeSort(A, low, mid);
        MergeSort(A, mid + 1, high);

        // Merge the sorted halves
        merge(A, low, mid, high);
    }
}

int main() {
    int arr[] = {3, 1, 5, 7, 9, 10, 8};
    int len = sizeof(arr) / sizeof(int);

    printf("Original Array:\n");
    printArray(arr, len);

    // Perform Merge Sort
    MergeSort(arr, 0, len - 1);

    printf("Sorted Array:\n");
    printArray(arr, len);

    return 0;
}
