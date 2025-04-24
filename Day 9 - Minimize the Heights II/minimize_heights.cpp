// Day 9 - Minimize the Heights II
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinDiff(vector<int>& arr, int k) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int ans = arr[n-1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n-1] - k;

    for (int i = 0; i < n-1; i++) {
        int minH = min(smallest, arr[i+1] - k);
        int maxH = max(largest, arr[i] + k);
        if (minH < 0) continue;
        ans = min(ans, maxH - minH);
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 5, 8, 10};
    int k = 2;
    cout << "Minimum difference: " << getMinDiff(arr, k) << endl;
    return 0;
}
