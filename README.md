# Internship

Weekly assignments and mini projects from my internship on Data Structures & Algorithms, written in C++.

## Contents

| Week | Topic | Folder |
|------|-------|--------|
| 1 | DSA Fundamentals & Arrays | [`week-1/`](week-1) |

---

## Week 1 – DSA Fundamentals & Arrays

**Topics covered:** Introduction to DSA, Time & Space Complexity (Big O), Arrays & Strings, Searching (Linear + Binary) and Sorting (Bubble + Selection).

### Assignments

| # | Problem | File | Time | Space |
|---|---------|------|------|-------|
| 1 | Linear Search | [`01_linear_search.cpp`](week-1/01_linear_search.cpp) | O(n) | O(1) |
| 2 | Binary Search on a sorted array | [`02_binary_search.cpp`](week-1/02_binary_search.cpp) | O(log n) | O(1) |
| 3 | Bubble Sort and count swaps | [`03_bubble_sort_swaps.cpp`](week-1/03_bubble_sort_swaps.cpp) | O(n^2) | O(1) |
| 4 | Reverse an array without extra array | [`04_reverse_array.cpp`](week-1/04_reverse_array.cpp) | O(n) | O(1) |

### Mini Project: Student Marks Analyzer

Input marks of N students in an array, then sort and print the top 3 marks and the average score.
File: [`mini_project_student_marks_analyzer.cpp`](week-1/mini_project_student_marks_analyzer.cpp)

### Sample outputs

**1. Linear Search**
```
Enter number of elements: 6
Enter 6 elements: 12 45 7 89 23 56
Enter element to search: 89

Element 89 found at index 3 (position 4)
```

**2. Binary Search**
```
Enter number of elements: 7
Enter 7 SORTED elements: 5 12 19 27 34 48 63
Enter element to search: 34

Element 34 found at index 4
```

**3. Bubble Sort with swap count**
```
Enter number of elements: 6
Enter 6 elements: 64 34 25 12 22 11

Sorted array: 11 12 22 25 34 64
Total swaps : 14
```

**4. Reverse Array**
```
Enter number of elements: 5
Enter 5 elements: 10 20 30 40 50

Reversed array: 50 40 30 20 10
```

**Mini Project: Student Marks Analyzer**
```
Enter number of students: 6
Enter marks of student 1: 78
Enter marks of student 2: 92
Enter marks of student 3: 65
Enter marks of student 4: 88
Enter marks of student 5: 95
Enter marks of student 6: 71

===== Student Marks Analyzer =====
Top marks:
  1. 95
  2. 92
  3. 88
Average score: 81.5
```

A full write-up with explanations and dry runs is in [`week-1/DSA_Week1_Assignment.pdf`](week-1/DSA_Week1_Assignment.pdf).

### How to compile and run

```bash
cd week-1
g++ -std=c++17 01_linear_search.cpp -o linear_search
./linear_search
```

Replace the file name to run any other program.
