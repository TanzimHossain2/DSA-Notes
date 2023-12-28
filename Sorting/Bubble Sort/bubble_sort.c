/** ============================================================================
 *  @file   bubble_sort.c
 *
 *  @brief  This program demonstrates the Bubble Sort algorithm and an optimized
 *          version with adaptive features.
 *
 *          Bubble Sort is a simple sorting algorithm that repeatedly steps
 *          through the list, compares adjacent elements, and swaps them if
 *          they are in the wrong order. The pass-throughs are repeated until
 *          the list is sorted.
 *
 *          The optimized version terminates early if no swaps are performed
 *          during a pass, indicating that the array is already sorted.
 *
 *  ============================================================================
 */

#include <stdio.h>

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
int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

    return 0;
}

// Bubble Sort algorithm
void bubbleSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // for the number of passes
        printf("\n Pass %d \n", i + 1);
        for (int j = 0; j < n - 1 - i; j++)
        { // for comparison in each pass

            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }

    printf("\n Array after sorting: \n");
    printArray(A, n);
}

// Optimized Bubble Sort algorithm with adaptive features
void OptimizeBubbleSort(int A[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    { // for the number of passes

        printf("\n Pass %d \n", i + 1);
        flag = 0; // Reset the flag at the start of each pass
        for (int j = 0; j < n - 1 - i; j++)
        { // for comparison in each pass

            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }

        if (flag == 0)
        {
            break; // If no swaps occurred, the array is already sorted
        }
    }

    printf("\n Array after Optimize sorting: \n");
    printArray(A, n);
}

int main()
{
    int Arr[] = {12, 54, 65, 7, 23, 9};
    int Arr2[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(Arr) / sizeof(Arr[0]);
    int n2 = sizeof(Arr2) / sizeof(Arr2[0]);

    printf("Array before sorting: \n");
    printArray(Arr, n);

    printf("Calling Bubble Sort \n");
    bubbleSort(Arr, n);

    printf("Calling Optimize Bubble Sort \n");
    OptimizeBubbleSort(Arr2, n2);

    return 0;
}
