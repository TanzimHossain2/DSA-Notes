#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void indDeletion(int arr[], int size, int index)
{
    // Code for Deletion
    for (int i = index; i < size-1 ; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Deletion Successful\n");
    return;
}




int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    printf("Before Deletion\n");
    display(arr, size);
    int index = 3;
    indDeletion(arr, size, index);
    size -= 1;
    printf("After Deletion\n");
    display(arr, size);
    
    return 0;
}