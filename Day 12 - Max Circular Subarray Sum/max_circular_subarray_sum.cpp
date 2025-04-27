#include <iostream>
#include <vector>
using namespace std;

int kadane(vector<int>& nums) {
    int max_current = nums[0], max_global = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        max_current = max(nums[i], max_current + nums[i]);
        max_global = max(max_global, max_current);
    }
    return max_global;
}

int maxCircularSubarraySum(vector<int>& nums) {
    int max_kadane = kadane(nums);
    int total_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        nums[i] = -nums[i];
    }
    int max_wrap = total_sum + kadane(nums);
    if (max_wrap == 0) return max_kadane;
    return max(max_kadane, max_wrap);
}

int main() {
    vector<int> nums = {5, -3, 5};
    cout << maxCircularSubarraySum(nums);
    return 0;
}
