#include <bits/stdc++.h>
using namespace std;

int maxInrow(string s) {
    int temp = 0, count = 1; char temp_i;
    if (s.size() == 1) {
        temp = 1;
        temp_i = s[0];
    }
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1]) {
            count++;
            if (temp < count) {
                temp = count;
                temp_i = s[i];
            }
        }
        else count = 1;
    }
    cout << temp_i << " " << temp;
    return 0;
}

int main() {
    string s; cin >> s;
    maxInrow(s);
    return 0;
}