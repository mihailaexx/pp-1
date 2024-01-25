#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t; cin >> s >> t;
    int N = s.size(), M = t.size(), i;
    if (N != M) {
        cout << "NO";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (i = 0; i < N; i++) {
        if (s[i] != t[i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
