#include <bits/stdc++.h>
using namespace std;

int countEvenDigits(string &number, int i = 0) {
    if (i >= number.length()) {
        return 0;
    }

    char temp = number[i];
    if (isdigit(temp)) {
        int currentDigit = temp - '0';
        if (currentDigit % 2 == 0) {
            return 1 + countEvenDigits(number, i + 1);
        } else {
            return countEvenDigits(number, i + 1);
        }
    }
}

int main() {
    string a; cin >> a; // int sum = 0;
    // for (int i = 0; i < a.size(); i++) if ((a[i]-48) % 2 == 0) sum++;
    // cout << sum;
    cout << countEvenDigits(a);
    return 0;
}