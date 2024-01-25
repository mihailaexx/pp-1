#include <bits/stdc++.h>
using namespace std;

int main() {
    double x,y,i=1; cin >> x >> y;
    while (floor(x) < y) {
        x += x/10;
        i+=1;
    }
    cout << i;
    return 0;
}
