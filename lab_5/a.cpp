#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    int low = 0, hight = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) ++hight;
        if (s[i] >= 97 && s[i] <= 122) ++low;
    }
    cout << low << " " << hight;
    return 0;
}