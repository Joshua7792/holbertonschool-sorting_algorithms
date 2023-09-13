Sorting Algorithms & Big O
Table of Contents
Project Description
Learning Objectives
Requirements
Tests
Tasks
Task 0: Bubble Sort
Task 1: Insertion Sort
Task 2: Selection Sort
Task 3: Quick Sort
Project Description
This project involves implementing various sorting algorithms and understanding the concept of Big O notation. You will work in teams of two to complete this project. The project includes sorting algorithms such as Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. Additionally, you will learn how to evaluate the time complexity of these algorithms and select the best sorting algorithm for a given input.

Learning Objectives
By the end of this project, you should be able to:

Implement at least four different sorting algorithms.
Explain the concept of Big O notation and evaluate the time complexity of an algorithm.
Choose the most suitable sorting algorithm for a given input.
Understand the concept of a stable sorting algorithm.
Requirements
Editors allowed: vi, vim, emacs.
All code files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All code files should end with a new line.
A README.md file, at the root of the project folder, is mandatory.
Your code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.
Do not use global variables.
Each file should have no more than 5 functions.
Unless specified otherwise, you are not allowed to use standard library functions like printf, puts, etc.
The prototypes of all your functions should be included in your header file named sort.h.
Don't forget to push your header file.
All your header files should be include guarded.
A list or array does not need to be sorted if its size is less than 2.
There should be one project repository per group. Cloning, forking, or copying a project repository with the same name before the second deadline may result in a 0% score.
Tests
You can test your sorting algorithms with large sets of random integers using websites like Random.org.

Tasks
Task 0: Bubble Sort
Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm.

Prototype: void bubble_sort(int *array, size_t size);

You're expected to print the array after each time you swap two elements.
In the file 0-O, write the Big O notations of the time complexity of the Bubble sort algorithm, with one notation per line for the following cases:

Best case
Average case
Worst case
Task 1: Insertion Sort
Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

Prototype: void insertion_sort_list(listint_t **list);

You are not allowed to modify the integer n of a node; you have to swap the nodes themselves.
You're expected to print the list after each time you swap two elements.
In the file 1-O, write the Big O notations of the time complexity of the Insertion sort algorithm, with one notation per line for the following cases:

Best case
Average case
Worst case
Task 2: Selection Sort
Write a function that sorts an array of integers in ascending order using the Selection sort algorithm.

Prototype: void selection_sort(int *array, size_t size);

You're expected to print the array after each time you swap two elements.
In the file 2-O, write the Big O notations of the time complexity of the Selection sort algorithm, with one notation per line for the following cases:

Best case
Average case
Worst case
Task 3: Quick Sort
Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.

Prototype: void quick_sort(int *array, size_t size);

You must implement the Lomuto partition scheme.
The pivot should always be the last element of the partition being sorted.
You're expected to print the array after each time you swap two elements.
In the file 3-O, write the Big O notations of the time complexity of the Quick sort algorithm, with one notation per line for the following cases:

Best case
Average case
Worst case