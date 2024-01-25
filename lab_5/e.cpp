#include <bits/stdc++.h>
using namespace std;

int main() {
    int odd = 0, even = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            even += int(s[i] - 48);
        } else {
            odd += int(s[i] - 48);
        }
    }
    if (even == odd) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}