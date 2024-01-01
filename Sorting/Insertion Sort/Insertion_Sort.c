/*================================================================
* Filename: Insertion_Sort.c

* Description: Implementation of the Insertion Sort algorithm in C.

* Algorithm: 
    - Start with the second element and compare it with the elements before it.
    - If the current element is smaller, move the larger elements ahead.
    - Repeat this process until the entire array is sorted.

* Comments: The insertion sort algorithm is a simple sorting algorithm that builds the final sorted array one element at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

* Readability: The code follows a clear structure, and comments have been added to enhance readability.

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

void insertionSort(int Arr[], int n)
{
    int key, i, j;

    // Loop for passes
    for (i = 1; i <= n - 1; i++)
    {
        key = Arr[i];
        j = i - 1; // Index of the previous element

        // Loop for each pass
        while (j >= 0 && Arr[j] > key)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = key;

        // Print the array after each pass
        printf("Array after %d pass: \n", i);
        printArray(Arr, n);
   
    }

    printf("Sorted array: \n");
    printArray(Arr, n);
}

int main()
{
    //  -1,  0  , 1  , 2  , 3 , 4
    //      12,| 11 , 13 , 5  , 6 -> i=1, j=0, key=11
    //      11,| 12 , 13 , 5  , 6 --> 1st pass done (i=1) !

    //      11 , 12,| 13 , 5  , 6 -> i=2, j=1, key=13
    //      11 , 12,| 13 , 5  , 6 --> 2nd pass done (i=2) !

    //      11 , 12 , 13,| 5  , 6 -> i=3, j=2, key=5 
    //      11 , 12 , 13,| 13 , 6 -> i=3, j=1, key=5 
    //      11 , 12 , 12,| 13 , 6 -> i=3, j=0, key=5
    //      11 , 11 , 12,| 13 , 6 -> i=3, j=-1, key=5
    //      5  , 11 , 12,| 13 , 6 --> 3rd pass done (i=3) !

    //      5  , 11 , 12 , 13,| 6 -> i=4, j=3, key=6
    //      5  , 11 , 12 , 13,| 13 -> i=4, j=2, key=6
    //      5  , 11 , 12 , 12,| 13 -> i=4, j=1, key=6
    //      5  , 11 , 11 , 12,| 13 -> i=4, j=0, key=6
    //      5  , 6  , 11 , 12,| 13 -> i=4, j=-1, key=6
    //      5  , 6  , 11 , 12,| 13 --> 4th pass done (i=4) !

    //      5  , 6  , 11 , 12 , 13 --> 5th pass done (i=5) !  sorted array


    int arr[] = {12, 11, 13, 5, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, len);

    insertionSort(arr, len);

    return 0;
}