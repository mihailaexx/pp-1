#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    set< pair<string, int> > students;
    map<string, int> one;
    for (int i = 0; i < n; i++) {
        string name; int day; cin >> name >> day;
        students.insert(make_pair(name, day));
    }
    for (const auto c : students) {
        one[c.first] += 1;
    }
    for (const auto c : one) {
        string answ = (c.second > 2) ? " +1" : " NO BONUS";
        cout << c.first << answ << endl;
    }
    return 0;
}