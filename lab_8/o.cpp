#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    set<char>outp;
    for (char ch : s) {
        if (islower(ch)) {
            outp.insert(ch);
        } else if (isupper(ch)) {
            outp.insert(tolower(ch));
        }
    }
    cout << outp.size() << endl;
    for (int c : outp) cout << char(c) << " ";
    return 0;
}