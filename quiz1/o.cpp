#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    string s, b; cin >> s;
    b = s;
    reverse(s.begin(), s.end());
    if (b==s) cout << "YES";
    else cout << "NO";
    return 0;
}