#include <bits/stdc++.h>
using namespace std;

int main() {
    long int N, l=0, r=0, sum = 0; cin >> N >> l >> r;
    long int *arr = new long int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = l; (l <= i) and (i <= r); i++) { 
        sum += arr[i-1];
    }
    cout << sum;
    return 0;
}

/*

*/