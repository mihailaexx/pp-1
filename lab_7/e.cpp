#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string isPowerOfTwo(int n) {
    if (n <= 0) {
        return "No";
    } else if (n == 1) {
        return "Yes";
    } else if (n % 2 == 0) {
        return isPowerOfTwo(n / 2);
    } else {
        return "No";
    }
}

int main() {
    int a, i=0; cin >> a;
    // while (pow(2,i) <= a) {
    //     if (pow(2,i) == a) {
    //         cout << "Yes";
    //         return 0;
    //     }
    //     i++;
    // }
    // cout << "No";

    cout << isPowerOfTwo(a);
    return 0;
}