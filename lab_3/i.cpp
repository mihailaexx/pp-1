#include <bits/stdc++.h>
using namespace std;

int main() {
    long int N, l=0, r=0; cin >> N >> l >> r;
    long int *arr = new long int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < l-1; i++) { 
        cout << arr[i] << " ";
    }
    for (int i = r; (l <= i) and (i <= r); i--) { 
        cout << arr[i-1] << " ";
    }
    for (int i = r; i < N; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}