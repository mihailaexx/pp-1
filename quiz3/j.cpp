#include <bits/stdc++.h>
using namespace std;
typedef string str;

int main(){
    str s; cin >> s;
    while (s.size())
    {
        str copy = s;
        reverse(copy.begin(), copy.end());
        if (copy == s) {
            s.pop_back();
            continue;
        }
        else {
            cout << s.size();
            return 0;
        }
    }
    cout << 0;
    return 0;
}