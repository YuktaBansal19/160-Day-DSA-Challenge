solution
#include <bits/stdc++.h>
using namespace std;

bool canPlaceCows(vector<int>& stalls, int k, int minDist) {
    int count = 1; // First cow placed at stalls[0]
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= minDist) {
            count++;
            lastPos = stalls[i];
        }
        if (count >= k) return true;
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int low = 1; // Minimum possible distance
    int high = stalls.back() - stalls[0]; // Max possible distance
    int result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, k, mid)) {
            result = mid;      // Store the possible answer
            low = mid + 1;     // Try for larger minimum distance
        } else {
            high = mid - 1;    // Try for smaller minimum distance
        }
    }
    return result;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    cout << "Maximum minimum distance: " << aggressiveCows(stalls, k) << endl;
    return 0;
}
