
# Merge Sort

Merge sort is a highly efficient sorting algorithm that operates on the principle of Divide and Conquer. It involves breaking down a list into several sub-lists until each sublist contains a single element and then merging those sublists in a manner that results in a sorted list.

## Merge Sort Working Rule

The working rule of Merge Sort involves three main steps:

1. **Divide:** Break down the problem into multiple subproblems.
2. **Conquer:** Solve the subproblems recursively by breaking them down further until reaching atomic subproblems.
3. **Combine:** Combine the solutions of the subproblems to obtain the final result.

Example:

![Merge Sort](https://static.studytonight.com/data-structures/images/divide-conquer.png)

---

So, the merge sort working rule can be summarized in the following steps:

1. Divide the unsorted array into subarrays, each containing a single element.
2. Take adjacent pairs of two single-element arrays and merge them to form an array of 2 elements.
3. Repeat the process until a single sorted array is obtained.

An array of size ‘N’ is divided into two parts of size ‘N/2’. These arrays are further divided until a single element is reached. When the base case of a single element is hit, the algorithm starts merging the left and right parts, resulting in a sorted array.

## Visualization

![Merge Sort](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif)

## Merge Sort Algorithm Flow

Array = {70, 50, 30, 10, 20, 40, 60}

![Merge Sort](https://journaldev.nyc3.cdn.digitaloceanspaces.com/2019/07/MergeSort.png)

## Algorithm

```text
MERGE_SORT(arr, beg, end)  
    if beg < end  
        mid = (beg + end) / 2;  
        MERGE_SORT(arr, beg, mid)  
        MERGE_SORT(arr, mid + 1, end)  
        MERGE(arr, beg, mid, end)  
    end if  
END MERGE_SORT
```

## Time and Space Complexity

|    Best   |    Average    |    Worst   |  Memory   |
| :-------: | :-----------: | :--------: | :-------: |
| Ω(n log(n)) | θ(n log(n)) | O(n log(n)) | O(n) |

## Merge Sort Applications

Merge sort finds applications in scenarios where a stable, efficient sorting algorithm is required.
