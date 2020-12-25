# Coding-Problem

## Problem 1

Given an array , the task is to reverse the array.

***Solution-1 Iterative version***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/ReverseArray.cpp).
Time complexity = O(n) and space complexity = O(1)

***Solution-2 Recursive version***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/ReverseArrayUsingRecursion.cpp).
Time complexity = O(n) and space complexity = O(n) (For recursion call stack)

## Problem 2

Write a program to return minimum and maximum in an array. Your program should make the minimum number of comparisons.

***Solution-1 Linear version***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinMaxElementOfArrayUsingLinearserach.cpp).
Time complexity = O(n) and space complexity = O(1)

No. of comparisons (in worst case) = 2*(n-1) = 2n - 2

***Solution-2 recursive version***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinMaxOfArrayUsingRecursion.cpp).
Time complexity = O(n) and space complexity = O(n) (For recursion call stack)

No. of comparisons (in worst case) = 2*(n-1) = 2n - 2

Both the above approaches take total N comparision the below solution takes lesser.

***Solution-3 Divide and Conquer : Tournament Method (using recursion)***
[Solution-3.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinMaxOfArrayUsingTournamentMethod.cpp)
Time complexity = O(n) and space complexity = O(logn) (For recursion call stack)

No. of comparisons (in worst case) = T(n) = 3n/2 - 2

## Problem 3

Given an array, cyclically rotate an array by one.

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. Then following line contains 'n' integers forming the array. 

***Solution-1 Linear version***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/CyclicallyRotateArrayByOne.cpp).
Time complexity = O(n) and space complexity = O(1)


## Problem 4

Implement the function which uses the static and global variable in the recursive function.

***Solution-1 using global variable***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/recursionGlobalVariable.cpp).

***Solution-2 using static variable***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/recursionStaticVariable.cpp).

## Problem 5

Write a program to print fibonacci series using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciRecursion1.cpp).

***Solution-2***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciRecursion2.cpp).

## Problem 6

Write a program to solve tower of hanoi using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/towerOfHanoi.cpp).

## Problem 7

Write a program to check a array sorted or not using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/isSortedRecursion.cpp).


## Problem 8

Write a program to rotate a array right by d.

So the goal is to rotate the elements in an array right d times. 

As an example; if d==2, then array = {0,1,2,3,4} would become array = {3,4,0,1,2}.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/RotateArrayOnebyOne.cpp).
Time complexity = O(n*d) and space complexity = O(1) 

***Solution-2***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/RotateArrayUsingTempArray.cpp).
Time complexity = O(n) and space complexity = O(d)

***Solution-3 Reversal algorithm***
[Solution-3.cpp](https://github.com/ekant1999/coding-problem/blob/main/reversalAlgoForRotation.cpp).
Time complexity = O(n) and space complexity = O(1)

***Solution-4 Juggling algorithm***
[Solution-4.cpp](https://github.com/ekant1999/coding-problem/blob/main/RotationUsingJugglingAlgo.cpp).
Time complexity = O(n) and space complexity = O(1)


## Problem 9

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Example: input={-1, 3, -9, 5, 6, -4, -5, -6, 7, -10};             output= {-1, -9, -4, -5, -6, -10, 5, 6, 7, 3}

Note: Order of elements is not important here.

***Solution-1 Two Pointer Technique***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/seprateNegNum.cpp).
Time complexity = O(n) and space complexity = O(1) 


## Problem 10
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:Could you solve this problem without using the library's sort function?

***Solution-1 Counting technique***
[Solution-1.cpp]()
Time complexity = O(n) and space complexity = O(1) 

***Solution-2 Dutch flag algorithm / 3-way partitioning***
 one-pass algorithm using only O(1) constant space.
 
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/DutchFlagAlgo.cpp).
Time complexity = O(n) and space complexity = O(1) 

## Problem 11

Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1

***Solution-1 Using count array***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/findMissingRepeatPairUsingCountArray.cpp).
Time complexity = O(n) and space complexity = O(n) 


