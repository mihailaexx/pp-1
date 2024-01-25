#include <bits/stdc++.h>
using namespace std;
void recurse(int n) {
    if (n > 0) {
        recurse(n-1);
        cout << n << " ";
    }
}


int main() {
    int a; cin >> a;
    recurse(a);
}