#include <iostream>
#include <vector>
using namespace std;

vector<int> computeLPS(string pat) {
    int m = pat.length(), len = 0;
    vector<int> lps(m, 0);
    for (int i = 1; i < m;) {
        if (pat[i] == pat[len]) lps[i++] = ++len;
        else if (len != 0) len = lps[len - 1];
        else lps[i++] = 0;
    }
    return lps;
}

bool KMPSearch(string pat, string txt) {
    int m = pat.length(), n = txt.length();
    vector<int> lps = computeLPS(pat);
    int i = 0, j = 0;

    while (i < n) {
        if (pat[j] == txt[i]) {
            i++; j++;
        }
        if (j == m) return true;
        else if (i < n && pat[j] != txt[i]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return false;
}

int main() {
    string text, pattern;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter pattern: ";
    cin >> pattern;

    if (KMPSearch(pattern, text))
        cout << "Pattern found!" << endl;
    else
        cout << "Pattern not found." << endl;
    return 0;
}
