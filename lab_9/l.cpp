#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<pair<int,int>> slovar;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        slovar.insert(make_pair(a+b,i+1));
    }
    for (auto pair : slovar) {
        cout << pair.second << " ";
    }
    return 0;
}