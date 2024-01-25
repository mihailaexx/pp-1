#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> slovar;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string title; cin >> title; int episode; cin >> episode;
        map<string, int>::iterator it = slovar.find(title);
        if (it != slovar.end()) {
            slovar[title] += episode;
            continue;
            }
        slovar[title] = episode;
    }
    
    for (auto c : slovar) {
        cout << c.first << " " << c.second << endl;
    }

    return 0;
}
