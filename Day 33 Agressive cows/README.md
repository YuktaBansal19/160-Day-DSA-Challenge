README
# Day 33 - Aggressive Cows

### Problem:
You are given an array `stalls[]` of size `n` which represents the positions of the stalls, and an integer `k` which represents the number of cows.

Place the cows in the stalls such that the minimum distance between any two of them is maximized.

### Approach:
- Use **binary search** on the answer (minimum distance).
- For each mid distance, use a greedy approach to check if we can place `k` cows.
- If possible, try for a bigger minimum distance.
- Else, reduce the distance.

### Time Complexity:  
- Sorting: O(n log n)  
- Binary Search: O(log(max_distance))  
- Feasibility Check: O(n)  
- **Total: O(n log n + n log(max_distance))**



 