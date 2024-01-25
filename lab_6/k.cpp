#include <bits/stdc++.h>
using namespace std;

void sum_zifr() {
    string n; int sum = 0; cin >> n;
    for (char c : n) {
        sum += (c-48);
    }
    cout << sum;
}

int main() {
    sum_zifr();
    return 0;
}