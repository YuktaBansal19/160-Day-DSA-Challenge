number_of_occurences.cpp
#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            count++;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Occurrences of " << target << ": " << countOccurrences(arr, n, target) << endl;
    return 0;
}
