# Bubble sort

## What is Bubble Sort?

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares two adjacent elements, and swaps them until they are in the correct order. We can visualize it like bubbles in water, where the biggest bubble will be at the end of the list and the smallest bubble at the beginning.

![Bubble sort](https://miro.medium.com/v2/resize:fit:501/0*l6PC-ARdWVQL0a-q.gif)

Bubble sort is commonly used where complexity is not a critical factor, and simplicity and short code are preferred.

## How It Works

Bubble sort works by repeatedly swapping adjacent elements if they are in the wrong order. Let's understand its process with an example:

```c
[5, 1, 4, 0, 9]
```

Here, the array length is 5. The total number of passes will be 5-1 = 4. Each pass involves comparing two elements at a time. So, the pass calculation is `Array length - 1`.

1. **1st Pass:**

    ```c
    [5, 1, 4, 0, 9]
    [1, 5, 4, 0, 9]
    [1, 4, 5, 0, 9]
    [1, 4, 0, 5, 9]
    [1, 4, 0, 5, 9]
    ```

    - Total comparisons: 4 times.
    - Total possible swaps: 3 times.

2. **2nd Pass:**

    ```c
    [1, 4, 0, 5, 9]
    [1, 4, 0, 5, 9]
    [1, 0, 4, 5, 9]
    [1, 0, 4, 5, 9]
    ```

    - Total comparisons: 3 times.
    - Total possible swaps: 1 time.

3. **3rd Pass:**

    ```c
    [1, 0, 4, 5, 9]
    [0, 1, 4, 5, 9]
    [0, 1, 4, 5, 9]
    ```

    - Total comparisons: 2 times.
    - Total possible swaps: 1 time.

4. **4th Pass:**

    ```c
    [0, 1, 4, 5, 9]
    [0, 1, 4, 5, 9]
    ```

    - Total comparisons: 1 time.
    - Total possible swaps: 0 times.

In the 4th pass, no comparisons are needed as the array is already sorted, so the loop can be stopped.

**Note**: Total comparisons are calculated by `Array length - 1`. Total possible swaps are calculated by `Array length - 1 - pass`.

- Total Number of Comparisons = `n(n - 1)/2 = O(n^2)`. This is also the same for total possible swaps. Example: `5(5 - 1)/2 = 10`, for length 5 array needs 10 comparisons and 10 swaps.

- Stable sort algorithm; the order is the same as the input array.

- By default, it is not adaptive, but it can be made adaptive by adding a flag variable. If no swaps occur in a pass, the loop can be broken, making it adaptive.

## Visualization of Bubble Sort

![Bubble sort](https://miro.medium.com/v2/resize:fit:1400/format:webp/1*GUkhhrPDfgdvvwVFo-il1g.gif)

## Algorithm

The algorithm for Bubble Sort is as follows:

```text
begin BubbleSort(list)
    for all elements of list
        if list[i] > list[i+1]
            swap(list[i], list[i+1])
        end if
    end for
    return list
end BubbleSort
```

## Optimized Bubble Sort Algorithm

In the bubble sort algorithm, comparisons are made even when the array is already sorted. To optimize it, a `flag` variable is added to check whether the array is already sorted. If it is, the loop is broken, and the sorted array is returned.

```text
begin BubbleSort(list)
    for all elements of list
        if list[i] > list[i+1]
            swap(list[i], list[i+1])
            flag = true
        end if
    end for
    if flag == false
        break
    end if
    return list
end BubbleSort
```

## Space and Time Complexity

| Case  | Space Complexity | Time Complexity |
|:-----:|:----------------:|:---------------:|
| Worst |       O(1)       |      O(n^2)     |
| Best  |       O(1)       |       O(n)      |
| Avg   |       O(1)       |      O(n^2)     |

- **Worst Case**: O(n^2) - Total number of comparisons is `n(n - 1)/2`.
- **Best Case**: O(n) - Already sorted array, takes only one pass to check.
- **Average Case**: O(n^2) - Same as the worst case.

**Note**: For the optimized bubble sort, the best case is O(n). This is because this algorithm only requires one pass to check if the array is sorted.

The space complexity is constant, O(1), as it doesn't require additional space proportional to the input size.

---
