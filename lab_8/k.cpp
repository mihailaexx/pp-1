#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k; cin >> k;
    sort(arr.begin(),arr.end(), greater<>());
    for (int i = 0; i < k; i++) sum += arr[i];
    cout << sum;
    return 0;
}