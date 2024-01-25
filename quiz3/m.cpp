#include <bits/stdc++.h>
using namespace std;

string chef(string s) {
    int sum = 0;
    for(const auto c : s) {
        sum+= c;
        if (sum >= 300) return "It is tasty!";
    }
    return "Oh, no!";
}

int main() {
    string s; cin >> s;
    cout << chef(s);
    return 0;
}