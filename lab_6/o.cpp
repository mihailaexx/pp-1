#include <bits/stdc++.h>
using namespace std;

void lucky_me() {
    string n; long long int sum = 0; cin >> n;
    for (char c : n) sum += (c-48);
    int temp = n[n.size()-1]-48;
    if (sum % temp == 0) cout << "Yes";
    else cout << "No";
}

int main() {
    lucky_me();
    return 0;
}