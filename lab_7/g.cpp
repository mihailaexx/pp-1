#include <bits/stdc++.h>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    cin >> a; // unsigned long long sum = 1, a; 
    // for (int i = 1; i <= a; i++) sum*=i;
    // cout << sum;
    cout << factorial(a);
    return 0;
}

