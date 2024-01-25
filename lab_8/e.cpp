#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int l, r; cin >> l >> r;
    arr.erase(arr.begin()+l, arr.begin()+r+1);
    for (int i = 0; i < n-1-(r-l); i++) cout << arr[i] << " ";
    return 0;
} 