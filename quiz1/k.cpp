#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 1; cin >> n; // always > 4
    while (n > 0) {
        if (i % 7 == 0) {
            i++;
            continue;
        }
        else if (i%2 == 1) n+= 3;
        else n-= 4;
        i++;
    }
    cout << i;
    return 0;
}