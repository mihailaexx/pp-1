#include <bits/stdc++.h>
using namespace std;


int main() {
    long int n; cin >> n;
    long int *arr = new long int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    long int l,r; cin >> l >> r; l++; r++;
    for (int i = 0; i < l-1; i++) cout << arr[i] << " ";
    for (int i = r; i >= l; i--) cout << arr[i-1] << " ";
    for (int i = r; i < n; i++) cout << arr[i] << " ";
    return 0;
}   