#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,a,b; cin >> x >> y >> a >> b;
    if ((x-a > 0 && y-b > 0) || x-a >= abs(y-b)) cout << "Yes";
    else cout << "No";
    return 0;
}