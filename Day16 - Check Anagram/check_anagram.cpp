#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t))
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
