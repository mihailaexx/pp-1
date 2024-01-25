#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s, answ; cin >> s;
    for (char c : s) {
        if (c + n > 90) answ += c+n-26;
        else answ += c+n;
    }
    cout << answ;
    return 0;
}