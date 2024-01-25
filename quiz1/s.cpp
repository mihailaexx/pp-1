#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    if ((a + b > c && a + c > b && b + c > a) && (a == b || a == c || b == c)) cout << "Yes";
    else cout << "No";
    return 0;
}