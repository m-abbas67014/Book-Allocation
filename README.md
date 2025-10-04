# Book-Allocation
This project implements the Book Allocation Problem using the Binary Search concept in Data Structures and Algorithms (DSA). The goal is to allocate books among students such that the maximum number of pages assigned to any student is minimized. This is a common problem used to practice Binary Search on Answer and Greedy distribution logic.

**Problem Overview:**
The Book Allocation Problem aims to distribute a set of books (each having a certain number of pages) among a given number of students so that:
Each student gets a contiguous sequence of books.
The maximum number of pages assigned to any student is minimized.

**Concept Used:**
Binary Search on Answer
Greedy Allocation Strategy
Data Structures and Algorithms (DSA)

**Problem Statement:**
Given an array arr[] where arr[i] denotes the number of pages in the i-th book, and an integer no_Readers representing the number of students, allocate the books such that:
Each book is allocated to exactly one student.
Each student has at least one book.
The maximum number of pages assigned to a student is minimized.
Return that minimum possible value.

**Example:**

**Input:**
arr = [10, 20, 30, 40]
no_Readers = 2

**Output:**
60

**Explanation:**
Allocation 1: [10, 20, 30] and [40] → max = 60
Allocation 2: [10, 20] and [30, 40] → max = 70
Hence, the minimum possible maximum pages = 60.

**Approach:**
1. Use Binary Search to guess the answer (minimum possible max pages).
2. Check if it’s possible to allocate books with that mid-value using a helper function.
3. Adjust the binary search range accordingly until the optimal value is found.

**Code Structure:**
bool isValid(vector<int>& arr, int no_Books, int no_Readers, int max_Allowed_Pages);
int allocateBooks(vector<int> &arr, int no_Books, int no_Readers);
int main();

**sample Output:**
Minimum possible maximum pages: 60

**Topics Covered:**
Binary Search
Greedy Algorithms
Problem Solving
Data Structures and Algorithms (DSA)

**Author:**

**Muhammad Abbas**
Passionate about DSA and algorithmic problem solving.
