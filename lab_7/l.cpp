#include <bits/stdc++.h>
using namespace std;

string palindrome(string a) {
    string b = a;
    reverse(a.begin(), a.end());
    if (a == b) return "Yes";
    else return "No";
}

int main() {
    string c; cin >> c;
    cout << palindrome(c);
}