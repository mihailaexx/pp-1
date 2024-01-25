#include <bits/stdc++.h>
using namespace std;

void dopustim() {
    string s; int sum = 0; cin >> s;
    for (char c : s) if ((int)c % 2 == 0) sum += 1;
    if (s.size() != sum) cout << "Not valid";
    else cout << "Valid";
}

int main() {
    dopustim();
    return 0;
}