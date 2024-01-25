#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    int dalniy = 96;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > dalniy) {
            dalniy = s[i];
        }
    }
    cout << (char)dalniy;
    return 0;
}
