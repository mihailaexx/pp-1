#include <bits/stdc++.h>
using namespace std;

void validator() {
    string s; int n, temp = 1; cin >> s >> n;
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            if (n==1) {
                cout << "Valid"; 
                exit(0);
            }
            else if (s[i+1] >= 48 && s[i+1] <= 57) {
                temp += 1;
                if (temp == n) {
                    cout << "Valid";
                    exit(0);
                }
            }
            else temp = 1;
        }
    }
    cout << "Not valid";
}

int main() {
    validator();
    return 0;
}