#include <iostream>
using namespace std;

bool areRotations(string s1, string s2) {
    return (s1.length() == s2.length()) &&
           ((s1 + s1).find(s2) != string::npos);
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areRotations(s1, s2))
        cout << "Strings are rotations of each other." << endl;
    else
        cout << "Strings are not rotations." << endl;

    return 0;
}
