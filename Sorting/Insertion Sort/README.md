
# Insertion Sort

Insertion sort is a comparison-based sorting algorithm that constructs the final sorted array one element at a time. The algorithm repeatedly selects an element from the unsorted portion of the array and inserts it into its correct position within the sorted portion.

![Insertion Sort](https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif)

---

The core idea behind insertion sort is to take one element, iterate through the sorted array, and find its correct position. Once the correct position is identified, the element is inserted. This process continues until the entire array is sorted.

![Insertion Sort](https://d1jnx9ba8s6j9r.cloudfront.net/blog/wp-content/uploads/2019/08/Deck-insertion-sort-234x180.png)

Insertion Sort works in a manner similar to arranging a deck of cards.

## Visualization of Insertion Sort

![Insertion Sort](https://miro.medium.com/v2/resize:fit:1012/1*JP-wURjwf4k23U2G3GNQDw.gif)

## Insertion Sort Algorithm

- If the element is the first, assume it's already sorted. Return 1.
- Pick the next element and store it in a variable called `key`.
- Compare `key` with the previous element. If the previous element is greater than `key`, move the previous element to the next position.
- Compare `key` with the previous element. If the previous element is smaller than `key`, insert `key` at the current position.
- Repeat steps 3 and 4 until all elements in the array are sorted.

## Insertion Sort How it Works?

Consider an unsorted array `[5, 1, 4, 0, 9]` sorted in ascending order using Insertion Sort.

- **Step 1:**
  - Compare the first two elements; if the first is greater than the second, swap them.
  ```text
  [5, 1, 4, 0, 9]
  [1, 5, 4, 0, 9] // 5 > 1, so swap.
  ```

- **Step 2:**
  - Compare the second element with the third; if the second is greater than the third, swap.
  ```text
  [1, 5, 4, 0, 9]
  [1, 4, 5, 0, 9] // 5 > 4, so swap.
  ```

- **Step 3:**
  - Compare the third element with the fourth; if the third is greater than the fourth, swap.
  ```text
  [1, 4, 5, 0, 9]
  [1, 4, 0, 5, 9] // 5 > 0, so swap.
  ```

- **Step 4:**
  - Compare the fourth element with the fifth; if the fourth is greater than the fifth, swap.
  ```text
  [1, 4, 0, 5, 9]
  [1, 4, 0, 5, 9] // 5 > 9, no swap.
  ```

- **Step 5:**
  - Repeat steps 1 to 4 until the array is sorted.
  ```text
  [1, 4, 0, 5, 9] // 4 > 0, so swap.
  [1, 0, 4, 5, 9]
  [0, 1, 4, 5, 9] // 1 > 0, so swap.
  [0, 1, 4, 5, 9]
  ```

- **Step 6:**
  - The array is sorted.
  ```text
  [0, 1, 4, 5, 9]
  ```

### Another Example Visualization of How Insertion Sort Works Step by Step

<div style="padding: 20px; border-radius: 10px; overflow: hidden; position: relative;">
    <p><strong>Another Example Visualization</strong></p>
    <div style="position: absolute; top: 0; left: 0; width: 80%; height: 100%; background-color: white; z-index: -1;"></div>
    <img src="https://www.studytonight.com/data-structures/images/basic-insertion-sort.png" alt="Insertion Sort" style="width: 80%; border: 1px solid #ddd; border-radius: 5px; padding: 5px;">
</div>

## Time Complexity of Insertion Sort Algorithm

The time complexity of insertion sort is calculated based on the number of passes. For an array of length `n`, the total number of comparisons will be `n(n-1)/2`, resulting in a time complexity of `O(n^2)`.

**Analysis of Insertion Sort:**

- Total passes = n-1
- Total comparisons = n(n-1)/2 = O(n^2) (Worst Case)
- Total comparisons = n-1 = O(n) (Best Case - when the array is already sorted)
- Stability: Yes (Does not change the relative order of elements with equal keys)
- Adaptability: Yes (Time taken reduces if the array is partially sorted)

Feel free to contribute, ask questions, or provide feedback. Happy coding! 😊
