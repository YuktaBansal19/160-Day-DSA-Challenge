#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) return false;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int low = 0, high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int midElement = matrix[mid / cols][mid % cols];

        if (midElement == target) {
            return true;
        } else if (midElement < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    int target = 3;

    cout << (searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;
    return 0;
}
