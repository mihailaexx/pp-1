#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; int answ = 0, product = 1; cin >> n;
    for (int i = 0; i < n.size(); i++) {
        product *= n[i]-48;
        answ += n[i]-48;
    }
    cout << (product + answ);
    return 0;
}