#include <bits/stdc++.h>
#include <cmath>
using namespace std;

unsigned long long powerOfTwo(int a) {
    if (a == 0) {
        return 1.0;
    } else if (a > 0) {
        return 2.0 * powerOfTwo(a - 1);
    }
}

int main() {
    long long int n; cin >> n; 
    // long long int answ = pow(2,n);
    // cout << answ;
    cout << powerOfTwo(n);
}