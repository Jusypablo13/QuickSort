
---

# QuickSort Implementation

## Overview

This repository contains two C++ programs that demonstrate the implementation of the QuickSort algorithm:

1. **QuickSort.cpp** - A generic implementation of the QuickSort algorithm for sorting integer arrays.
2. **QuickSortPersons.cpp** - A modified version of the QuickSort algorithm designed to sort a list of "Person" objects based on specific attributes (e.g., name or age).

## Files

### QuickSort.cpp

This file contains an implementation of the QuickSort algorithm for sorting integers in an array. The QuickSort algorithm is a divide-and-conquer algorithm that works by selecting a pivot element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

#### Functions:
- `partition(vector<int>& vec, int low, int high)`: Partitions the array and returns the pivot index.
- `quickSort(vector<int>& vec, int low, int high)`: Recursively sorts the array using the QuickSort algorithm.

#### Example Usage:
The program sorts a vector of integers using QuickSort:
```cpp
vector<int> vec = {3, 6, 8, 10, 1, 2, 1};
quickSort(vec, 0, vec.size() - 1);
```

### QuickSortPersons.cpp

This file extends the QuickSort algorithm to work with a custom `Person` class. The `Person` class contains attributes like name and age, and the QuickSort algorithm is used to sort a list of persons based on one of these attributes (e.g., by age or by name).

#### Key Components:
- **Person class**: Represents a person with attributes like `name` and `age`.
- `partition(vector<Person>& persons, int low, int high, bool byAge)`: Partitions the list of persons based on the selected attribute (e.g., age or name).
- `quickSort(vector<Person>& persons, int low, int high, bool byAge)`: Recursively sorts the list of persons based on the selected attribute.

#### Example Usage:
Sorting a list of `Person` objects by age:
```cpp
vector<Person> persons = {Person("John", 25), Person("Jane", 22), Person("Doe", 30)};
quickSort(persons, 0, persons.size() - 1, true);  // Sort by age
```

## Compilation and Execution

To compile the files, you can use any C++ compiler. For example, using `g++`:

```bash
g++ QuickSort.cpp -o quicksort
./quicksort
```

Similarly for `QuickSortPersons.cpp`:

```bash
g++ QuickSortPersons.cpp -o quicksort_persons
./quicksort_persons
```
---

## Notes

- **Comparison of QuickSort performance with other algorithms**:
    - **QuickSort** has an average performance of O(n log n), but in the worst case, it can degrade to O(n²) when the pivot is not chosen appropriately.
    - **MergeSort** always has a time complexity of O(n log n), regardless of the data set, but it requires additional memory due to the creation of subarrays.
    - **Insertion Sort** and **Selection Sort** are less efficient with a time complexity of O(n²), but **Insertion Sort** performs better on nearly sorted or small datasets.

- **Pivot selection strategies in QuickSort**:
    - Testing the implementation with different pivot selection strategies (first element, last element, random, or median-of-three) shows how each method impacts performance on various types of data sets.
    - Choosing the **first** or **last element** as the pivot can lead to poor performance (O(n²)) on already sorted or reverse-sorted data.
    - A **random pivot** or **median-of-three** strategy generally improves performance by reducing the likelihood of encountering the worst-case scenario, leading to more consistent O(n log n) behavior across different data types.
    - In `QuickSortPersons.cpp`, sorting by different attributes can be controlled using a boolean flag (e.g., `byAge` to sort by age).
--- 
