#include <bits/stdc++.h>
using namespace std;

int main() {
    int mid, end, last; cin >> mid >> end >> last;
    if (mid + end + last >= 70 && mid + end >= 30 && last >= 20) cout << "YES!";
    else cout << "NO.";
    return 0;
}