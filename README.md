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


## Problem 3

Implement the function which uses the static and global variable in the recursive function.

***Solution-1 using global variable***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/recursionGlobalVariable.cpp).

***Solution-2 using static variable***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/recursionStaticVariable.cpp).

## Problem 4

Write a program to print fibonacci series using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciRecursion1.cpp).

***Solution-2***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciRecursion2.cpp).

## Problem 5

Write a program to solve tower of hanoi using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/towerOfHanoi.cpp).

## Problem 6

Write a program to check a array sorted or not using recursion.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/isSortedRecursion.cpp).


## Problem 7

Write a program to rotate a array right by d.

So the goal is to rotate the elements in an array right d times. As an example; if d==2, then array = {0,1,2,3,4} would become array = {3,4,0,1,2}.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/RotateArrayOnebyOne.cpp).
Time complexity = O(n*d) and space complexity = O(1) 

***Solution-2***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/RotateArrayUsingTempArray.cpp).
Time complexity = O(n) and space complexity = O(d)

***Solution-3 Reversal algorithm***
[Solution-3.cpp](https://github.com/ekant1999/coding-problem/blob/main/reversalAlgoForRotation.cpp).
Time complexity = O(n) and space complexity = O(1)

***Solution-4***
[Solution-4.cpp]().
Time complexity = O(n) and space complexity = O(1)


