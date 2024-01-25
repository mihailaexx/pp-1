#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,temp=0; cin >> a >> b >> c;
    for (int i = 0; i < 3; i++) {
    if (a < b) swap(a,b);
    if (b < c) swap(b,c);
    if (a < c) swap(a,c);
    }
    cout << a << " " << b << " " << c;
    return 0;
}