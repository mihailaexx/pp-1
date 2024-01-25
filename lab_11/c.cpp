#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    int sum = 0;
    map<string, int> students;
    vector< pair<float, string> > arr;
    for (int i = 0; i < n; i++) {
        string name; int point; cin >> name >> point;
        students[name] += point;
        sum += point;
    }

    map<string, int>::iterator it=students.begin();
    for(; it != students.end(); it++) arr.push_back(make_pair((*it).second,(*it).first));

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for (auto c : arr) cout << c.second << " " << (c.first * 100 / sum) << "%" << endl;
    return 0;
}