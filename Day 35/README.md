README
# Day 35 - Kth Missing Positive Number

### Problem:
Given a sorted array `arr[]` of unique positive integers and an integer `k`, return the k-th missing positive number.

### Binary Search Approach:
- Use binary search to find the smallest index `low` such that:
  - `arr[low] - (low + 1) >= k`
- The answer is: `low + k`

### Time Complexity: O(log n)  
### Space Complexity: O(1)