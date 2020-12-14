# Coding-Problem

## Problem 1

Given an array , the task is to reverse the array.

***Solution-1 Iterative version***

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/ReverseArray.cpp) .
Time complexity = O(n) and space complexity = O(1)

***Solution-2 Recursive version***

[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/ReverseArrayUsingRecursion.cpp) .
Time complexity = O(n) and space complexity = O(n) (For recursion call stack)

## Problem 2

Write a program to return minimum and maximum in an array. Your program should make the minimum number of comparisons.

***Solution-1 Linear version***

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinMaxElementOfArrayUsingLinearserach.cpp) .
Time complexity = O(n) and space complexity = O(1)

No. of comparisons (in worst case) = 2*(n-1) = 2n - 2

***Solution-2 recursive version***

[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinMaxOfArrayUsingRecursion.cpp) .
Time complexity = O(n) and space complexity = O(n) (For recursion call stack)

No. of comparisons (in worst case) = 2*(n-1) = 2n - 2

Both the above approaches take total N comparision the below solution takes lesser.

***Solution-3 Divide and Conquer : Tournament Method***
[Solution-3.cpp]()
Time complexity = O(n) and space complexity = O(logn) (For recursion call stack)

No. of comparisons (in worst case) = T(n) = 3n/2 - 2

