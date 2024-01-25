#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rotate(arr.begin(), arr.begin()+m, arr.end());
    reverse(arr.begin(), arr.end());
    for (auto c : arr) cout << c << " ";
    return 0;
}