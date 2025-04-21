
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinDiff(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;

    for (int i = 0; i < n - 1; i++) {
        int minVal = min(smallest, arr[i + 1] - k);
        int maxVal = max(largest, arr[i] + k);
        if (minVal < 0) continue;
        ans = min(ans, maxVal - minVal);
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 5, 8, 10};
    int k = 2;
    cout << "Minimum difference is " << getMinDiff(arr, k) << endl;
    return 0;
}
