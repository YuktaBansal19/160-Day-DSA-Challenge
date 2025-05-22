#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& row, int target, int rowIndex) {
    int low = 0, high = row.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (row[mid] == target) {
            cout << "Found at position (" << rowIndex << ", " << mid << ")" << endl;
            return true;
        } else if (row[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(const vector<vector<int>>& matrix, int x) {
    for (int i = 0; i < matrix.size(); ++i) {
        if (binarySearch(matrix[i], x, i)) {
            return true;
        }
    }
    cout << "Element not found." << endl;
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int x = 3;

    searchMatrix(matrix, x);

    return 0;
}
