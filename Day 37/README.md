# Day 37 - Rotate Matrix by 90 Degrees (Clockwise)

## Problem:
You are given a square matrix of size N x N. You need to rotate the matrix by 90 degrees in the clockwise direction.

## Approach:

1. **Transpose the matrix** – Convert rows to columns.
2. **Reverse each row** of the transposed matrix.

This will rotate the matrix by 90 degrees clockwise **in-place**.

## Time and Space Complexity:
- **Time Complexity:** O(N²)
- **Space Complexity:** O(1)


