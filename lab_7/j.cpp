#include <bits/stdc++.h>
using namespace std;

int halfOfEverything(string &a, int sum = 0, int i = 0) {
    if (i == a.size()) {
        return sum;
    } else {
        int temp = (a[i] - '0') / 2;
        return halfOfEverything(a, sum + temp, i + 1);
    }
}

int main() {
    string a; cin >> a; // int sum = 0;
    // for (int c : a) {
    //     sum += (c-48) / 2;
    // }
    // cout << sum;
    cout << halfOfEverything(a);
    return 0;
}