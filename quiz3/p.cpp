#include <bits/stdc++.h>
using namespace std;

string strToBool(string s) {
    if (s == "1") return "true";
    else if (s == "0") return "false";
    else return s;
}

int main() {
    string s; cin >> s;
    cout << strToBool(s);
    return 0;
}