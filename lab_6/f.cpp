#include <bits/stdc++.h>
using namespace std;

void dopusimaya() {
    string s; int n; cin >> s >> n;
    int counter = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 48 and s[i] <=57) {
            counter += 1;
        }
    }
    if (counter >= n) cout << "YES";
    else cout << "NO";
}

int main() {
    dopusimaya();
    return 0;
}