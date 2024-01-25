#include <bits/stdc++.h>
using namespace std;

void ubrat_glasnie() {
    string s, vowels = "aeiouAEIOU", answ; getline(cin, s);
    for (char c : s) if (vowels.find(c) == string::npos) answ.push_back(c);
    cout << answ;
}

int main() {
    ubrat_glasnie();
    return 0;
}