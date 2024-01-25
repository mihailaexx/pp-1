#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; char x; int n; cin >> s >> x >> n;
    if (n == count(s.begin(), s.end(), x)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}