#include <bits/stdc++.h>
using namespace std;


int main() {
    long int n; cin >> n;
    long int *arr = new long int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = n-1; i != -1; i--) cout << arr[i] << " ";
    return 0;
}   