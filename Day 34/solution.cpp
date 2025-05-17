
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:

    bool ispossible(vector<int> &arr, int k , int n , int maxpages){
        int students = 1;
        int pagesum = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > maxpages) return false;

            if(pagesum + arr[i] > maxpages){
                students++;
                pagesum = arr[i];

                if(students > k) return false;
            } else {
                pagesum += arr[i];
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k > n) return -1;

        int low = arr[0], high = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] > low) low = arr[i];
            high += arr[i];
        }

        int ans = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(ispossible(arr, k, n, mid)){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> books = {12, 34, 67, 90};
    int students = 2;

    int result = sol.findPages(books, students);
    cout << "Minimum number of pages = " << result << endl;

    return 0;
}
