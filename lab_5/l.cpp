#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    int a = 0, i;
    for (i = 0; i < s.size()-1; i++) {
        if (s[i] <= s[i+1]) {
            a += 1;
        } else {
            break;
        }
    }
    if (s.size() == i+1) { 
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}