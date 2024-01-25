#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    x = (x < 0) ? x*-1 : x;
    
    if (x <= 1) return false;

    for (int i = 2; i <= x/2; i++) if (x % i == 0) return false;
    
    return true;
}

int main() {
    int n, counter = 0; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << count_if(arr.begin(), arr.end(), isPrime);
    return 0;
}