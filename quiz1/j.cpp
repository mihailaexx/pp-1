#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;
    int x,y,z; cin >> x >> y >> z;
    int sum; cin >> sum;
    if (sum >= a*x+b*y+c*z) cout << "Yes";
    else cout << "No";
    return 0;
}