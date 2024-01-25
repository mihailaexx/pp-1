#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> students(n);
    vector<int> marks(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i] >> marks[i];
    }
    sort(students.begin(), students.end());
    sort(marks.begin(), marks.end());
    for (int i = 0; i < n; i++) cout << students[i] << " " << marks[i] << endl;
    return 0;
}