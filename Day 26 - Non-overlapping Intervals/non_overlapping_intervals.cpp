#include <bits/stdc++.h>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;
    sort(intervals.begin(), intervals.end(), [](auto& a, auto& b){ return a[1] < b[1]; });
    int end = intervals[0][1], count = 0;
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < end)
            count++;
        else
            end = intervals[i][1];
    }
    return count;
}

int main() {
    vector<vector<int>> intervals = {{1,2},{2,3},{3,4},{1,3}};
    cout << "Removed: " << eraseOverlapIntervals(intervals);
    return 0;
}
