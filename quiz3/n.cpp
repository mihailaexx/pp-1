#include <bits/stdc++.h>
using namespace std;

string clear(string s) {
    string copy;
    for (const char c : s) {
        if (islower(c) || isupper(c)) copy.push_back(c);
    }
    return copy;
}

int main() {
    string s; cin >> s;
    cout << clear(s);
    return 0;
}