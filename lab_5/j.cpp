#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s;
    s += s[0];
    for(int i = s.length() - 1; i >= 0; i--) {
      	t.push_back(s[i]);
    }
    if (s == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}