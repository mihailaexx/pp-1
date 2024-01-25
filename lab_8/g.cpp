#include <bits/stdc++.h>
using namespace std;

int isPrime(int x) {
    for (int j = 2; j <= sqrt(x); j++) {
        if (x % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, sum = 0; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k; cin >> k;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= k) {
            sum += isPrime(arr[i]);
        }
    }
    cout << sum;
    return 0;
}