#include <bits/stdc++.h>
using namespace std;

void prikol() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] -= 32;
        }
    i++;
    }
    cout << s;
}

int main() {
    prikol();
    return 0;
}