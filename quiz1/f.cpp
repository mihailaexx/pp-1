#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    int x3,y3; cin >> x3 >> y3;
    if ((x1 <= x3 && x3 <= x2) && (y2 <= y3 && y3 <= y1)) cout << "yes";
    else cout << "no";
    return 0;
}