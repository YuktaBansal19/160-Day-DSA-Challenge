#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(const vector<vector<int>>& matrix, int x) {
    int n = matrix.size();
    int m = matrix[0].size();

    int row = 0, col = m - 1;

    while (row < n && col >= 0) {
        if (matrix[row][col] == x) {
            cout << "Found at position (" << row << ", " << col << ")" << endl;
            return true;
        } else if (matrix[row][col] > x) {
            col--;
        } else {
            row++;
        }
    }

    cout << "Element not found." << endl;
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int x = 29;

    searchMatrix(matrix, x);

    return 0;
}
