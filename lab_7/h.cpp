#include <bits/stdc++.h>
using namespace std;

int fibo(int n) {
    if (n == 1) return 0;
    else if (n == 2 || n == 3) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int a; cin >> a;
    cout << fibo(a);
}