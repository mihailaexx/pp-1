#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(string &number, int i = 0) {
    if (i >= number.length()) {
        return 0;
    }
    
    char digit = number[i];
    if (isdigit(digit)) {
        int currentDigit = digit - '0';
        return currentDigit + sumOfDigits(number, i + 1);
    }
}

int main() {
    string n; cin >> n; // long long int sum =0;
    // for (char c : n) sum += c-48;
    // cout << sum;
    cout << sumOfDigits(n);
    return 0;
}