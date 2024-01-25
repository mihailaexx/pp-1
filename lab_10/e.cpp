#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double sum = 0;
    map<string, double> KZ;
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        for (int j = 0; j < m; j++) {
            string city; double amount; cin >> city >> amount;
            KZ[city] += amount;
            sum += amount;
        }
    }
    for (auto c : KZ) cout << c.first << " " << (c.second*100)/sum << endl;
    return 0;
}