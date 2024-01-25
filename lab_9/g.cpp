#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 49 && s[i+1] == 49) {
            s.erase(i,2);
            i--;
        }
    }
    cout << s;
    return 0;
}
