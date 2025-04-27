#include <iostream>
#include <string>
using namespace std;

int myAtoi(string s) {
    int i = 0, sign = 1, result = 0;
    while (i < s.size() && s[i] == ' ') i++;
    if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i++] == '-') ? -1 : 1;
    }
    while (i < s.size() && isdigit(s[i])) {
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > 7))
            return (sign == 1) ? INT_MAX : INT_MIN;
        result = result * 10 + (s[i++] - '0');
    }
    return result * sign;
}

int main() {
    string s = "42";
    cout << myAtoi(s);
    return 0;
}
