#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    for (int i = 0; i < s.size(); i++) {
        s[i] +=1;
        if (s[i] != 123) {
            cout << s[i];
        } else {
            cout << "a";
        }
    }
    return 0;
}