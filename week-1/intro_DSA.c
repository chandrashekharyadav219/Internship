/*Introduction to DSA
DSA (Data Structures and Algorithms) is a fundamental concept in Computer Science used to store, organize, process, and solve problems efficiently.
1. Data Structure
A data structure is a way of organizing and storing data so that it can be accessed and modified efficiently.
Examples:
- Array – stores elements in continuous memory locations.
- Linked List – stores elements using nodes and pointers.
- Stack – follows LIFO (Last In, First Out).
- Queue – follows FIFO (First In, First Out).
- Tree – represents hierarchical data.
- Graph – represents relationships between entities.
- Hash Table – stores data using key-value pairs.
2. Algorithm
An algorithm is a finite sequence of well-defined steps used to solve a particular problem.
Example: Finding the largest number
Given: 10, 25, 15, 30, 20
Steps:
1. Assume 10 is the largest.
2. Compare it with 25 → largest = 25.
3. Compare 25 with 15 → largest = 25.
4. Compare 25 with 30 → largest = 30.
5. Compare 30 with 20 → largest = 30.
Answer = 30
3. Why DSA is Important?
DSA helps to:
- Solve problems efficiently.
- Reduce execution time.
- Reduce memory usage.
- Handle large amounts of data.
- Design efficient software and applications.
- Improve programming and problem-solving skills.
4. Time and Space Complexity
To compare algorithms, we mainly consider:
Time Complexity: How much time an algorithm takes as input size increases.
Examples:
- O(1) → Constant
- O(log n) → Logarithmic
- O(n) → Linear
- O(n log n) → Linearithmic
- O(n²) → Quadratic
Space Complexity: How much additional memory an algorithm requires.*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            break;
        }
    }

    return 0;
}