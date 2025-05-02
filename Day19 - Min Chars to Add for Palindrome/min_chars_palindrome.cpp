#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCharsToMakePalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    string concat = str + "$" + rev;
    vector<int> lps(concat.size(), 0);
    for (int i = 1; i < concat.size(); i++) {
        int len = lps[i - 1];
        while (len > 0 && concat[i] != concat[len]) len = lps[len - 1];
        if (concat[i] == concat[len]) len++;
        lps[i] = len;
    }
    return str.size() - lps.back();
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << "Min chars to add: " << minCharsToMakePalindrome(str) << endl;
    return 0;
}
