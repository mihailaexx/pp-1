#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    if (sqrt(n) == round(sqrt(n))) cout << "Perfecto";
    else cout << "Simple";
    return 0;
}