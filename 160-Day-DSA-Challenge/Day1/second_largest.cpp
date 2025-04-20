// Problem: Second Largest Element
// Link: https://www.geeksforgeeks.org/find-second-largest-element-array/
// Time Complexity: O(n)
// Author: Yukta Bansal

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findSecondLargest(const vector<int>& nums) {
    int largest = INT_MIN, second = INT_MIN;
    for (int num : nums) {
        if (num > largest) {
            second = largest;
            largest = num;
        } else if (num > second && num != largest) {
            second = num;
        }
    }
    return second;
}

int main() {
    vector<int> arr = {10, 20, 5, 8, 30};
    cout << "Second Largest: " << findSecondLargest(arr) << endl;
    return 0;
}
