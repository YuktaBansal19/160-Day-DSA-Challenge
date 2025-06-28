# Day 41: Set Matrix Zeroes

## Problem Statement
Given an `m x n` matrix, if an element is 0, set its entire row and column to 0 in-place.

## Example
**Input:**
```
matrix = [[1,1,1],[1,0,1],[1,1,1]]
```
**Output:**
```
[[1,0,1],[0,0,0],[1,0,1]]
```

## Approach
Use the first row and column as flags. Track separately whether the first row/column themselves should be set to zero.

### Time Complexity: O(m * n)
### Space Complexity: O(1)
