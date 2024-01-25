#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    if (s[s.size()-1] == 40) {
        cout << "NO";
        return 0;
    }
    sort(s.begin(), s.end());
    if ((count(s.begin(), s.end(), 41) == count(s.begin(), s.end(), 40))) cout << "YES";
    else cout << "NO";
    return 0;
}
