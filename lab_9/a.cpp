#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    multiset<pair<int,int>> slovar;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        slovar.insert(make_pair(a,b));
    }
    for (auto pair : slovar) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}