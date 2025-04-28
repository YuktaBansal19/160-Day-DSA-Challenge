#include <iostream>
#include <algorithm>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        if (i >= 0) carry += a[i--] - '0';
        if (j >= 0) carry += b[j--] - '0';
        result += (carry % 2) + '0';
        carry /= 2;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a, b;
    cout << "Enter first binary string: ";
    cin >> a;
    cout << "Enter second binary string: ";
    cin >> b;
    cout << "Sum is: " << addBinary(a, b) << endl;
    return 0;
}
