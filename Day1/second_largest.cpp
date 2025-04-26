
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(vector<int>& arr) {
    int largest = INT_MIN, second = INT_MIN;
    for (int num : arr) {
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
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    cout << "Second Largest: " << findSecondLargest(arr) << endl;
    return 0;
}
