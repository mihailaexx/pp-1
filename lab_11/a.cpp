#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> week = {
        {"SUN", 7}, {"MON", 6}, {"TUE", 5}, {"WED", 4}, {"THU", 3}, {"FRI", 2}, {"SAT", 1}
    };
    string s; cin >> s;
    map<string, int>::iterator it = week.find(s);
    cout << it->second;
    return 0;
}