#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 0; double n, sum = 0; cin >> n;
    while (sum < 500000) {
        sum += n*0.3;
        n = n*1.1;
        i++;
    }
    cout << i;
    return 0;
}