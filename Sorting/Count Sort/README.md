# Count Sort

Counting sort is a sorting algorithm that efficiently sorts elements by counting the number of occurrences of each unique element in an array or list. This technique is particularly effective when the range of elements is known in advance.

## Algorithm

```text
countSort(array, size)
  max <- find the largest element in the array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and 
    store the count at the jth index in the count array
  for i <- 1 to max
    find the cumulative sum and store it in the count array itself
  for j <- size down to 1
    restore the elements to the array
    decrease the count of each element restored by 1
```

This algorithm works by determining the count of each unique element in the array, then using this information to reconstruct the sorted array.

## Example

Consider an array: [4, 2, 4, 1, 3, 2, 4]
- The maximum element is 4.
- Initialize count array: [0, 0, 0, 0, 0, 0]
- Count occurrences: [0, 1, 2, 1, 3, 0]
- Cumulative sum: [0, 1, 3, 4, 7, 7]
- Restore elements: [0, 1, 1, 2, 2, 3, 4]
- Sorted array: [1, 2, 2, 3, 4, 4]

This ensures that the array is sorted in ascending order.

Counting sort has a time complexity of O(n + k), where n is the number of elements in the array and k is the range of input.
