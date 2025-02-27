# Sorting Algorithms

This repository contains implementations of various sorting algorithms.

## Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Steps

1. Start at the beginning of the array.
2. Compare the first two elements.
3. If the first element is greater than the second, swap them.
4. Move to the next pair of elements and repeat step 3.
5. Continue this process until the end of the array is reached.
6. Repeat steps 1-5 for the remaining elements, excluding the last sorted elements.
7. Continue until no more swaps are needed.

### Notes

- **In-place**: Yes, Bubble Sort is an in-place sorting algorithm as it requires only a constant amount of additional space.
- **Stable**: Yes, Bubble Sort is a stable sorting algorithm because it does not change the relative order of elements with equal keys.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n) - occurs when the array is already sorted.
  - Average Case: O(n^2) - occurs when the elements are in random order.
  - Worst Case: O(n^2) - occurs when the array is sorted in reverse order.
- **Space Complexity**: O(1) - Bubble Sort requires only a constant amount of additional space.

## Shell Sort

Shell Sort is an optimization over Insertion Sort that allows the exchange of items that are far apart. The idea is to arrange the list of elements so that, starting anywhere, taking every hth element produces a sorted list. Such a list is said to be h-sorted.

### Steps

1. Initialize the gap to n/2.
2. Perform a gapped insertion sort for this gap size.
3. Reduce the gap and repeat until the gap is 1.

### Notes

- **In-place**: Yes, Shell Sort is an in-place sorting algorithm.
- **Stable**: No, Shell Sort is not a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n log n)
  - Average Case: O(n^(3/2))
  - Worst Case: O(n^2)
- **Space Complexity**: O(1)

## Selection Sort

Selection Sort is a simple comparison-based sorting algorithm. It divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list.

### Steps

1. Find the minimum element in the unsorted array.
2. Swap it with the element at the beginning of the unsorted array.
3. Move the boundary of the unsorted array one element to the right.
4. Repeat until the entire array is sorted.

### Notes

- **In-place**: Yes, Selection Sort is an in-place sorting algorithm.
- **Stable**: No, Selection Sort is not a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n^2)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Space Complexity**: O(1)

## Insertion Sort

Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

### Steps

1. Start with the first element as the sorted portion.
2. Take the next element and insert it into the sorted portion at the correct position.
3. Repeat until all elements are sorted.

### Notes

- **In-place**: Yes, Insertion Sort is an in-place sorting algorithm.
- **Stable**: Yes, Insertion Sort is a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Space Complexity**: O(1)

## Gnome Sort

Gnome Sort is a simple sorting algorithm originally proposed by Dick Grune and named for the way a garden gnome sorts a line of flower pots. The gnome looks at the flower pot next to it and the previous one; if they are in the wrong order, it swaps them and steps back; otherwise, it steps forward.

### Steps

1. Start at the beginning of the array.
2. If the current element is larger than the next element, swap them and move one step back.
3. If the current element is smaller than or equal to the next element, move one step forward.
4. Repeat until the end of the array is reached.

### Notes

- **In-place**: Yes, Gnome Sort is an in-place sorting algorithm.
- **Stable**: Yes, Gnome Sort is a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)
- **Space Complexity**: O(1)

## Comb Sort

Comb Sort is a relatively simple sorting algorithm originally designed by Wlodzimierz Dobosiewicz in 1980. Comb Sort improves on Bubble Sort by using a gap sequence to eliminate turtles, or small values near the end of the list, early in the sort.

### Steps

1. Initialize the gap to the size of the array.
2. Compare elements at the current gap and swap if necessary.
3. Reduce the gap and repeat until the gap is 1.

### Notes

- **In-place**: Yes, Comb Sort is an in-place sorting algorithm.
- **Stable**: No, Comb Sort is not a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**:
  - Best Case: O(n log n)
  - Average Case: O(n^2/2^p) where p is the number of increments
  - Worst Case: O(n^2)
- **Space Complexity**: O(1)

## Strand Sort

Strand Sort is a recursive sorting algorithm that works by repeatedly pulling sorted sublists out of the list to be sorted and merging them into a sorted list.

### Steps

1. Initialize an empty list to hold the sorted elements.
2. Extract the first element from the unsorted list and start a new sublist.
3. Iterate through the unsorted list and move elements to the sublist if they are greater than the last element in the sublist.
4. Merge the sublist into the sorted list.
5. Repeat until the unsorted list is empty.

### Notes

- **In-place**: No, Strand Sort is not an in-place sorting algorithm.
- **Stable**: Yes, Strand Sort is a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**: O(n^2)
- **Space Complexity**: O(n)

## Tournament Sort

Tournament Sort is a sorting algorithm that uses a priority queue to repeatedly extract the minimum element. It can be implemented in two ways: online and offline.

### Offline Tournament Sort

Offline Tournament Sort builds a tournament tree from the input list and repeatedly extracts the minimum element.

### Steps

1. Build a tournament tree from the input list.
2. Extract the minimum element from the tree.
3. Replace the extracted element with a large value and adjust the tree.
4. Repeat until all elements are extracted.

### Notes

- **In-place**: No, Offline Tournament Sort is not an in-place sorting algorithm.
- **Stable**: Yes, Offline Tournament Sort is a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**: O(n log n)
- **Space Complexity**: O(n)

### Online Tournament Sort

Online Tournament Sort maintains a tournament tree and allows for dynamic insertion of elements.

### Steps

1. Initialize an empty tournament tree.
2. Insert elements into the tree one by one.
3. Extract the minimum element from the tree.
4. Repeat until all elements are extracted.

### Notes

- **In-place**: No, Online Tournament Sort is not an in-place sorting algorithm.
- **Stable**: Yes, Online Tournament Sort is a stable sorting algorithm.

### Time and Space Complexity

- **Time Complexity**: O(n log n)
- **Space Complexity**: O(n)
