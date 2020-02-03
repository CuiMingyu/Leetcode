# Leetcode
record of my leetcode
first round is about 1-50 easy, medium in different classes.

## Content
* [Array](#Array)
* [String](#String)
* [Math](#Math)
* [Bit Manipulation](#BitManipulation)
* [Two Pointers](#TwoPointers)
* [Linked List](#LinkedList)
* [Stack](#Stack)
* [Queue](#Queue)
* [Sort](#Sort)
* [Heap](#Heap)
* [DFS](#DFS)
* [BFS](#BFS)
* [Sliding Window](#SlidingWindow)
* [Backtracking](#Backtracking)
* [Greedy](#Greedy)
* [DP](#DP)
* [Tree](#Tree)
* [Hash Table](#HashTable)
* [Binary Search Tree](#BinarySearchTree)



Array
------
#### Easy
##### 1. Two Num
    Just using iteration and will ac.
##### 26. Remove Duplicates from Sorted Array
    Please consider the case that input is null.  
    Using nums.empty() and return {} will be done.
##### 27. Remove Element
    A very clever method.  
    Using a index and just find the different number and replace it.
##### 35.Search Insert Position
    This question is very simple.  
    All you need to do is to consider the boundary cases.

String
------
#### Easy
##### 13. Roman to Integer
    Using a different thinking angle.  
    From left to right not right to left.  
    Try to using data structure like unordered_map.
##### 14. Longest Common Prefix
    This is a very simple question.
##### 20. Valid Parentheses
    Using stack and switch to solve it.  
    Remember stack.pop() and stack.top().
##### 28. Implement strStr()
    KMP!!!! Please figure out how to use KMP
##### 38. Count and Say
    Tips: How to count iterately and check equal continuely.  
    Using while(i + 1 < res.size() && res[i] == res[i + 1]).   
    to_string() to change int into string. 

Math
------
#### Easy
##### 7. Reverse Integer
    Do not always use x divide 10.  
    Please use res * 10 from zero to the number you want.
    INT_MAX is about 2^31.  
    INT_MIN is about 2^31.
    Pay attention to the remand, using long not int.
##### 9. Palindrome Number
    A same type question of 7.  
    Please notice input x is changing with my algorithm.

Linked List
------
#### Easy
##### 21. Merge Two Sorted Lists
    This is a basic question.  
    But you need to figure out Head and Temp pointer of a list.
    Temp pointer is always changing.
    Head pointer is the head of a list.
    Please check books to figure them out.
#### Medium
##### 2. Add Two Numbers
    There are lots of things need to be consider.
    Do not need to calculate the length of each list.
    Use ? : to compare and set zero value.
    Remember the setting of carry.
