#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i <= n; i++) {
        unsigned long long temp = pow(2,i);
        cout << temp << endl;
    }
    return 0;
}