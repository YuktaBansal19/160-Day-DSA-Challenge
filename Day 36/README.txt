# Day 36 - Spiral Traversal of a Matrix

### Problem:
Given a 2D array (matrix), return all elements of the matrix in spiral order.

### Approach:
- Use four pointers: `top`, `bottom`, `left`, `right`.
- Traverse:
  1. Left to Right on top row
  2. Top to Bottom on rightmost column
  3. Right to Left on bottom row (if applicable)
  4. Bottom to Top on leftmost column (if applicable)
- Shrink the boundaries after each pass.

### Time Complexity: O(m * n)  
### Space Complexity: O(1) (excluding result vector)
