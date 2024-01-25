#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> letters;
    vector<char> answ;
    for (int i = 0; i < n; i++) {
        string line; cin >> line;
        set<char> s(line.begin(), line.end());  
        for (char c : s) letters.push_back(c);
    }
    sort(letters.begin(), letters.end());
    set<char> unique_letters(letters.begin(), letters.end());
    for (const auto c : unique_letters) {
        int amount_of_i = count(letters.begin(), letters.end(), c);
        if (amount_of_i == n) {
            answ.push_back(c);
        }
    }
    if (answ.size()) for (const char c : answ) cout << c << " ";
    else cout << "NO COMMON CHARACTERS";
    return 0;
}