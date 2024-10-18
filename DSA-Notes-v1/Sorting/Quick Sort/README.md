# Quick Sort

## Introduction

Quick Sort is a highly efficient sorting algorithm known for its average-case performance of approximately n log n comparisons for an array of n elements. It follows the divide-and-conquer approach, breaking down the problem into smaller subproblems and combining the results to solve the original problem.

### Divide

In the divide step, a pivot element is selected from the array. The array is then partitioned into two subarrays - one with elements less than or equal to the pivot and the other with elements greater than the pivot.

### Conquer

Recursively, Quick Sort is applied to both subarrays.

### Combine

The sorted subarrays are combined to form the final sorted array.

![image](https://cwh-full-next-space.fra1.digitaloceanspaces.com/videos/data-structures-and-algorithms-in-hindi-57/Image_7.webp)

## Partition Algorithm

In the Quick Sort algorithm, partitioning is a crucial step performed on a fresh unsorted subarray. The process involves selecting the first element as the pivot and using two index variables, i and j. The partition algorithm follows these steps:

1. Define i as the low index (index of the first element) and j as the high index (index of the last element).
2. Set the pivot as the element at the low index (i).
3. Increment i until an element greater than the pivot is found.
4. Decrement j until an element smaller than or equal to the pivot is found.
5. Interchange the elements at indices i and j.
6. Repeat steps 3, 4, and 5 until j is less than or equal to i.
7. Swap the pivot element with the element at index j.

This partitioning ensures that smaller elements are on the left, and greater elements are on the right of the pivot.

**Example**

The partitioning step plays a crucial role in Quick Sort. Let's illustrate the partitioning algorithm using the array \( [2, 0, 10, 3]  \):

1. **Initial Array: [2, 0, 10, 3]**

2. **First Pass (Pivot: 2):**

    - i = 0, j = 3
    - \[2, 0, 10, 3\] (Pivot: 2)
    - i moves to the right until \(arr[i] > 2\): No movement
    - j moves to the left until \(arr[j] \leq 2\): \(arr[j] = 0\)
    - Swap \(arr[i]\) and \(arr[j]\): \([0, 2, 10, 3]\)
    - Move to the next iteration
    
3. **Second Pass (Pivot: 0):**

    - i = 1, j = 3
    - \[0, 2, 10, 3\] (Pivot: 0)
    - i moves to the right until \(arr[i] > 0\): \(arr[i] = 2\)
    - j moves to the left until \(arr[j] \leq 0\): \(arr[j] = 0\)
    - Swap \(arr[i]\) and \(arr[j]\): \([0, 2, 10, 3]\)
    - Move to the next iteration
    
4. **Third Pass (Pivot: 2):**

    - i = 2, j = 3
    - \[0, 2, 10, 3\] (Pivot: 2)
    - i moves to the right until \(arr[i] > 2\): \(arr[i] = 10\)
    - j moves to the left until \(arr[j] \leq 2\): \(arr[j] = 2\)
    - Swap \(arr[i]\) and \(arr[j]\): \([0, 2, 10, 3]\)
    - Move to the next iteration
    
5. **Fourth Pass (Pivot: 2):**

    - i = 3, j = 3
    - \[0, 2, 10, 3\] (Pivot: 2)
    - i moves to the right until \(arr[i] > 2\): No movement
    - j moves to the left until \(arr[j] \leq 2\): No movement
    - Swap \(arr[i]\) and \(arr[j]\): \([0, 2, 10, 3]\)
    
6. **Resulting Sorted Array: [0, 2, 3, 10]**

## Visualization

![Quick Sort Visualization](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)

---
![Quick Sort Visualization](https://miro.medium.com/v2/resize:fit:932/1*3lEL82yCH_-iaq46dji91w.gif)

## Quick Sort Analysis

In the worst case, when the array is already sorted, Quick Sort has a time complexity of O(n^2). This occurs (n-1) times, where n is the size of the array. The partition comparison is some linear function of n (R1n + R2).

\[ T = (n-1) \times (R1n + R2) + T(n-1) + T(0) = O(n^2) \]

In the best case, when the array is already sorted, Quick Sort has a time complexity of O(n log n).

The total time complexity is given by \(T = n \times h\), where h is the height of the tree.

- Stable: No, because of swapping, the order of elements may change.
- In-place: Yes, as it doesn't require extra space.
- Adaptive: No, it doesn't consider the order of an already sorted array.