Sorting Algorithms: Selection, Insertion, Bubble, Quick, Merge, Heap Sort (C)
This repository contains implementations of six commonly used sorting algorithms in C:

Selection Sort
Insertion Sort
Bubble Sort
Quick Sort
Merge Sort
Heap Sort
Each algorithm is implemented in its own function, demonstrating the differences in their approaches to sorting an array of integers.

Algorithms Overview
1. Selection Sort
Selection Sort repeatedly selects the smallest (or largest) element from the unsorted portion of the array and moves it to the sorted portion. This algorithm is simple but inefficient for large datasets.

2. Insertion Sort
Insertion Sort builds the final sorted array one item at a time by repeatedly inserting elements into the correct position in the sorted portion. It performs well for small or nearly sorted arrays but becomes inefficient for larger arrays.

3. Bubble Sort
Bubble Sort compares adjacent elements and swaps them if they are in the wrong order. The process is repeated until no swaps are needed, indicating that the array is sorted. This algorithm is simple but inefficient for large arrays.

4. Quick Sort
Quick Sort is a divide-and-conquer algorithm that splits the array into smaller sub-arrays based on a pivot element. It recursively sorts the sub-arrays. It is generally faster than other algorithms, but can perform poorly in the worst case.

5. Merge Sort
Merge Sort follows a divide-and-conquer approach, recursively dividing the array into two halves and merging them back in sorted order. It is efficient with a time complexity of O(n log n), and works well for large datasets.

6. Heap Sort
Heap Sort builds a binary heap from the array and then repeatedly extracts the maximum (or minimum) element from the heap, placing it in the sorted portion. It has a time complexity of O(n log n).
