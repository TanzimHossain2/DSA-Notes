# Selection Sort Algorithm

## Introduction

Selection sort is another algorithm that is used for sorting. his algorithm chooses the minimum element from the list of elements and swaps it with the first element of the list. Similarly, it chooses the second minimum element from the list and swaps it with the second element of the list. It continue swapping the elements until all the elements of the list are completely sorted  in either direction.

## Step-by-Step Algorithm for Selection Sort

1. Set min to the first location
2. Search the minimum element in the list
3. Swap the minimum element with the first element of the list
4. assign the second element of the list as min
5. Repeat steps 2, 3 and 4 until the list is sorted

## visualization of Selection Sort

![Selection Sort](https://markbowman.org/LCC/SortSelection.gif)

## Selection Sort Explained

Let's delve into the details of how Selection Sort works:

Imagine an array `[8, 0, 7, 1, 3]`.

- **1st pass:** Assume the first smallest element `8` is the smallest in the array. Compare it with the rest of the elements. If there is a smaller element, swap it with the first element. In this case, `0` is the smallest. Swap `8` and `0`. Now, the array becomes `[0, 8, 7, 1, 3]`.

- **2nd pass:** Assume the second smallest element `8` is the second smallest in the array. Compare it with the rest of the elements. If there is a smaller element, swap it with the second element. `1` is the smallest, so swap `8` and `1`. Now, the array becomes `[0, 1, 7, 8, 3]`.

- **3rd pass:** Assume the third smallest element `7` is the third smallest in the array. Compare it with the rest of the elements. If there is a smaller element, swap it with the third element. `3` is the smallest, so swap `7` and `3`. Now, the array becomes `[0, 1, 3, 8, 7]`.

- **4th pass:** Assume the fourth smallest element `8` is the fourth smallest in the array. Compare it with the rest of the elements. If there is a smaller element, swap it with the fourth element. `7` is the smallest, so swap `8` and `7`. Now, the array becomes `[0, 1, 3, 7, 8]`.

- **5th pass:** The array is automatically sorted. Hence, the array is sorted.

---

The length of the array is `n`. So, the number of passes is `n - 1`. Total possible comparisons are `n - 1 + n - 2 + n - 3 + ... + 1 = n(n - 1)/2`. Thus, the time complexity is `O(n^2)`. The space complexity is `O(1)`. The maximum swaps are `n - 1`, and the minimum swaps are `0`.

**Stable:** No, as it swaps elements, changing their order. For instance, if there are two `8`s in the array, the first `8` can be swapped with the second, altering their order.

**Adaptive:** No, as it doesn't consider the order of elements. It always compares elements from the beginning. Even if the array is already sorted, it still compares elements from the start.

Minimum number of swaps: It doesn't use any extra swaps, making it optimal for minimizing the number of swaps.

## Time and Space Complexity

| Best | Average | Worst | Memory |
| ---- | ------- | ----- | ------ |
| Ω(n^2) | θ(n^2) | O(n^2) | O(1) |

## Selection Sort Applications

The selection sort is used when

- a small list is to be sorted
- cost of swapping does not matter
- checking of all the elements is compulsory
- cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)
