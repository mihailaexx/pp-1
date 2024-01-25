#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    cout << count(s.begin(), s.end(), 'a') + count(s.begin(), s.end(), 'e') + count(s.begin(), s.end(), 'i') + count(s.begin(), s.end(), 'o') + count(s.begin(), s.end(), 'u');
    return 0;
}