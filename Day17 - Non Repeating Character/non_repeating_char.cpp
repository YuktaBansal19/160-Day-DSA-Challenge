#include <iostream>
#include <string>
using namespace std;

char firstNonRepeating(string s) {
    int freq[26] = {0};

    for (char c : s) freq[c - 'a']++;

    for (char c : s) {
        if (freq[c - 'a'] == 1)
            return c;
    }
    return '$';  // If no non-repeating character found
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    char res = firstNonRepeating(s);
    if (res == '$')
        cout << "No non-repeating character found.
";
    else
        cout << "First non-repeating character is: " << res << endl;
    return 0;
}
