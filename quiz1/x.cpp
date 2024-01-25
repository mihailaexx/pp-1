#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long a,b,c; cin >> a >> b >> c;
    if ((a == b && a != c) || (b == c  && b != a) || (a == c && a != b)) cout << "YES";
    else cout << "NO";
    return 0;
}
