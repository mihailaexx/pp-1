#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t, temp; cin >> s >> t;
    if ((int)t.size() % (int)s.size() != 0) {
        cout << "NO";
        return 0;
    }
    int povtor = (int)t.size() / (int)s.size(), i = 0;
    for (i=0; i < povtor; i++) {
        temp += s;
    }
    if ((temp == t && povtor != 1) || s == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
