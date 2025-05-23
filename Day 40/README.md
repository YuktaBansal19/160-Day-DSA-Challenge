# Day 40 - Search in a Sorted Matrix

## Approach:
We treat the 2D matrix as a 1D sorted array:
- Use binary search from `0` to `m*n - 1`.
- Map 1D index to 2D: `row = index / n`, `col = index % n`

## Time Complexity:
- **O(log(m * n))** using Binary Search.

## Space Complexity:
- **O(1)** constant space.
