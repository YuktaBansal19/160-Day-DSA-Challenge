#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse left to right
            for (int i = left; i <= right; i++)
                result.push_back(matrix[top][i]);
            top++;

            // Traverse top to bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // Traverse right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    result.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Traverse bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> res = sol.spiralOrder(matrix);

    cout << "Spiral order: ";
    for (int val : res) cout << val << " ";
    cout << endl;

    return 0;
}

