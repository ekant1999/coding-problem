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
 
 
 ## Problem 26
 
 Write a function that takes tree as input and returns the list containing the branch sum of all the possible path of the tree.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/findBranchSum.cpp).
 Time complexity = θ(N) space complexity = O(N). 
  
 ## Problem 27
 
 Write a function that takes tree as input and returns the sum of it's node depth.
 
                1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL
  
 output=6
 
***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/nodeDepthSumUsingRecursion.cpp).
 Time complexity = θ(N) space complexity = O(h), (h=height of tree) 
 
 
***Solution-2***
 [Solution-2.cpp](https://github.com/ekant1999/coding-problem/blob/main/nodeDepthSumIterative.cpp).
 Time complexity = θ(N) space complexity = O(N). 
 
 ## Problem 28
 
 Write a function that takes sorted array and target element as input and return the index of that element using binary search.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/BinarySearch.cpp).
 Time complexity = θ(logN) space complexity = O(logN) recursive stack. 
  
  
 ## Problem 29
 
Implement Stack using the array.

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/stackUsingArray.cpp).
 
 
 ## Problem 30
 
Write a function that takes array as input and return the sorted array of three maximum numbers in the input array.


***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/threeLargestNumber.cpp)
 Time complexity = θ(N) space complexity = O(1). 
 
 
 ## Problem 31
 
Write a function that takes string as a input and return whether it is palindrome string or not 

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/palindromeString.cpp)
 Time complexity = O(N) space complexity = O(1). 
 
  ## Problem 32
 Write a function that takes non empty array of positive number(queries) as input and return the minimum wait time take to execute the query. Only one query can be executed at a time, but the queries can be executed in any order. find the minimum wait time take to execute the query

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/minWaitingTime.cpp)
 Time complexity = O(logN) space complexity = O(1). 

 ## Problem 33
Given an input string, write a function that returns the Run Length Encoded string for the input string.
For example, if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6”

***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/runLengthEncode.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 
 ## Problem 34
Implement the stack using linked list.
***Solution-1***
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/stackUsingLinkedList.cpp)
 Time complexity = O(N) space complexity = O(N). 


 ## Problem 35
write a program to convert infix expression to postfix expression.
***Solution-1***
 [Solution-1.java](https://github.com/ekant1999/coding-problem/blob/main/infixToPostfix.java)
 Time complexity = O(N) space complexity = O(N). 


 ## Problem 36
write a program to convert postfix expression to infix expression.

***Solution-1***
 [Solution-1.java](https://github.com/ekant1999/coding-problem/blob/main/postfixToInfinx.java)
 Time complexity = O(N) space complexity = O(N). 
 
  ## Problem 37
Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1. The next greater elements should be printed in same order as input array.


***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/nextGreaterElement.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 
  ## Problem 38
 
Given an array, for each element find the value of the nearest element to the right which is having a frequency greater than as that of the current element. If there does not exist an answer for a position, then make the value ‘-1’.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 
  ## Problem 39
  
Given an expression string exp, write a program to examine whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp.


***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 ## Problem 40
 
Write a function which takes a list sorted in non-decreasing order and deletes any duplicate nodes from the list. The list should only be traversed once.


For example if the linked list is 11->11->11->21->43->43->60 then removeDuplicates() should convert the list to 11->21->43->60. 


[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/deleteDuplicatesFromLinkedList.cpp)
 Time complexity = O(N) space complexity = O(N). 


 
 ## Problem 41
 
Inorder tree traversal using Stack.

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/IterativeInorderTraversal.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 
 ## Problem 42
 
 Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.
 
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/SerializeBinaryTree.cpp)
 Time complexity = O(N) space complexity = O(N). 
 
 ## Problem 43
 
 Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
 
 
 Input : arr[] = {0, -1, 2, -3, 1}
 Output : (0 -1 1), (2 -3 1)
 
 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/threeNumberSum.cpp)
 Time complexity = O(N^2) space complexity = O(M). (M= number of triplets);

 ## Problem 44

Given two arrays of integers, compute the pair of values (one value in each array) with the smallest (non-negative) difference. Return the difference.

Input : A[] = {l, 3, 15, 11, 2}
        B[] = {23, 127, 235, 19, 8} 
        
        
Output : 3  


That is, the pair (11, 8) 


 [Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/smallestDifference.cpp)
 Time complexity = O(m log m + n log n) space complexity = O(1).



 ## Problem 45

Given an array input Arr containing n integers. We need to check whether the input array is Monotonic in nature or not.

An array is said to be monotonic in nature if it is either continuously increasing or continuously decreasing.

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/isMonotonic.cpp)
 Time complexity = O(N) space complexity = O(1).


 ## Problem 46

Given an array of positive numbers, find the maximum sum of a subsequence with the constraint that no 2 numbers in the sequence should be adjacent in the array. So 3 2 7 10 should return 13 (sum of 3 and 10) or 3 2 5 10 7 should return 15 (sum of 3, 5 and 7).Answer the question in most efficient way.

Input : arr[] = {5, 5, 10, 100, 10, 5}
Output : 110

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/maxSubsetSumNoAdj.cpp)
 Time complexity = O(N) space complexity = O(1).

## Problem 47

You are given a circular array nums of positive and negative integers. If a number k at an index is positive, then move forward k steps. Conversely, if it's negative (-k), move backward k steps. Since the array is circular, you may assume that the last element's next element is the first element, and the first element's previous element is the last element.


Determine if there is a loop (or a cycle) in nums. A cycle must start and end at the same index and the cycle's length > 1. Furthermore, movements in a cycle must all follow a single direction. In other words, a cycle must not consist of both forward and backward movements.

Input: [2,-1,1,2,2]

Output: true

Explanation: There is a cycle, from index 0 -> 2 -> 3 -> 0. The cycle's length is 3.

[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/circularArrayLoop.cpp)
 Time complexity = O(N) space complexity = O(1).


## Problem 48 

***Can Sum***

Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist elements in S whose sum is exactly x.
we have unlimited supply to the array element

Input: arr[] = {5,3,4,7}    sum = 7


Output: true


***Solution-1 using memoization***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/canSumUsingMemoization.cpp)
 Time complexity = O(N*M) space complexity = O(M). M-target value N- array size
 
 
 ## Problem 50

***How Sum***
Write a program that, given an array A[] of n numbers and another number x, and returns elements in S whose sum is exactly x. if the sum is not possible then return -1. We have unlimited supply to the array element

Input: arr[] = {5,3,4,9}    sum = 7

Output: {3,4}

***Solution-1 using memoization***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/howSumUsingMemoization.cpp)
 Time complexity = O(N*M^2) space complexity = O(M^2). M-target value N- array size
 
 ## Problem 50

***Best Sum***

Given a value V, if we want to make change for V cents, and we have infinite supply of each of C = { C1, C2, .. , Cm} valued coins, what is the minimum number of coins to make the change? 

Input: coins[] = {25, 10, 5}, V = 30

Output: Minimum 2 coins required

We can use one coin of 25 cents and one of 5 cents


***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/minCoinChange.cpp)
 Time complexity = O(N*M) space complexity = O(M). M-target value N- array size


 ## Problem 51
 
Mirror of a Tree: Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged.


***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/invertBinaryTree.cpp)
 Time complexity = O(N) space complexity = O(logN)
 
  ## Problem 52

This problem was asked by Google.

Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.

***Solution-1***
[Solution-1.cpp](https://github.com/ekant1999/coding-problem/blob/main/Problem_051.cpp)
 Time complexity = O(logN) space complexity = OlogN).
