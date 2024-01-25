#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}