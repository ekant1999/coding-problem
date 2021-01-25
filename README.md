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
Time complexity = O(2^n) and space complexity = O(n)

***Solution-2***
[Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciRecursion2.cpp).
Time complexity = O(2^n) and space complexity = O(n)

***Solution-3 Using DP (memoization)***
[Solution-3.cpp](https://github.com/ekant1999/coding-problem/blob/main/fibonacciUsingDp.cpp).
Time complexity = O(n) and space complexity = O(n)

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


***Solution-2 Using XOR***
 [Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/repeatMissingNumUsingXor.cpp).
Time complexity = O(n) and space complexity = O(1) 


## Problem 12

Write an efficient program to print all the duplicates and their counts in the input string

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/printDuplicates.cpp).
Time complexity = O(n) and space complexity = O(1) 

## Problem 13

Minimize the maximum difference between the heights

Given heights of n towers and a value k. We need to either increase or decrease height of every tower by k (only once) where k > 0. The task is to minimize the difference between the heights of the longest and the shortest tower after modifications, and output this difference.

Input  : arr[] = {1, 15, 10}, k = 6
Output :  Maximum difference is 5.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/MinimumHeightDiffrence.cpp).
Time complexity = O(n) and space complexity = O(1) 

## Problem 14

Given two sorted arrays, find their union and intersection.

Input : arr1[] = {1, 3, 4, 5, 7}
        arr2[] = {2, 3, 5, 6} 
        
Output : Union : {1, 2, 3, 4, 5, 6, 7} 
         Intersection : {3, 5}

***Solution-1 using sets***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/UnionOfTwoArrayUsingSets.cpp).
 
 ***Solution-2 using***
 [Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/UnionOfTwoArray.cpp).
 Time complexity = O(n+m) and space complexity = O(n+m) 
 
 ## Problem 15
 
 Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

For Input:
 -4 0 1 2 4 -3

output: 
6

***Solution-1  naive approach***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/MaxSumOfSubArrayUsingNaiveMethod.cpp).
 Time complexity = O(n^2) 
 
 ***Solution-2 Kadane's algorithm***
 [Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/MaxSumOfSubArrayUsingKadaneAlgo.cpp).
 Time complexity = O(n) and space complexity = O(1)

 
 ## Problem 16
 GirdTraveller-Count all possible paths from top left to bottom right of a mXn matrix.
 
The problem is to count all the possible paths from top left to bottom right of a mXn matrix with the constraints that from each cell you can either move only to right or down

Input :  m = 2, n = 2;

Output : 2

There are two paths

(0, 0) -> (0, 1) -> (1, 1)

(0, 0) -> (1, 0) -> (1, 1)

***Solution-1 recursion***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/gridTravellerUsingRecursion.cpp).
 Time complexity = O(2^n) space complexity = O(n) 
 
 
 ***Solution-2 memoization***
 [Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/gridTravellerUsingMemo.cpp).
 Time complexity = O(n) space complexity = O(n) 
 
 ## Problem 17
 
Given an array of integers where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.

Input:  N=11               arr=1 3 5 8 9 2 6 7 6 8 9 

Output: 3 

First jump from 1st element to 2nd element with value 3. Now, from here we jump to 5th element with value 9, and from here we will jump to last. 

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/MInNumOfJumpTillEnd.cpp).
 Time complexity = O(n) space complexity = O(n) 
 
 
 ## Problem 18
 
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 

Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input: N = 5, arr[] = {2, 4, 1, 3, 5}

Output: 3

Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3)

***Solution-1***
 [Solution-1.cpp]().
 Time complexity = O(n) space complexity = O(n) 
 
  ## Problem 19
 
Write a program to implement insertion sort.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/InsertionSort.cpp).
 Time complexity = O(n^2) space complexity = O(1) 

  ## Problem 20
 
Write a program to implement shell sort.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/ShellSort.cpp).
 Time complexity = O(n^2) space complexity = O(1) . 
 Time complexity = O(n^3/2) space complexity = O(1) using Knuths sequence.
 
   ## Problem 21
 
Write a program to implement merge sort.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/mergeSort.cpp).
 Time complexity = θ(nlogn) space complexity = O(n) . 

   ## Problem 22
 
Write a program to implement quick sort.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/quickSort.cpp).
 Time complexity = θ(nlogn) space complexity = O(nlogn) . 


   ## Problem 23
 
Write a program to implement heap sort.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/heapSort.cpp).
 Time complexity = θ(nlogn) space complexity = O(1) . 


   ## Problem 24
 
Given two non empty array of integers, write a function that determines whether the second array is a subsequence of the first one.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/validateSeq.cpp).
 Time complexity = θ(N) space complexity = O(1) . 
 
    ## Problem 25
 
 Write a function that takes BST and target value as input and returns the closest value to the target value present in the BST.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/findClosestValueInBST.cpp).
 Time complexity = θ(N) space complexity = O(N). 
 
 ***Solution-2***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/findClosestValueInBSTUsingRecursion.cpp).
 Time complexity = θ(N) space complexity = O(1). 
