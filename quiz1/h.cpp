#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, x; cin >> a >> b >> x;
    string y = ((a+b)/10 < x) ? "Boris, you are punished!" : "You are my sweet baby";
    cout << y;
    return 0;
}