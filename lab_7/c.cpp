#include <bits/stdc++.h>
using namespace std;

string finder(int n, vector<int> &arr, int x, int i = 0) {
    if (i == n) {
        return "No";
    }

    if (arr[i] == x) {
        return "Yes";
    } else {
        return finder(n, arr, x, i+1);
    }
}

int main() {
    int n, x, i; cin >> n;
    vector <int> arr(n);
    for (i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
    // for (i = 0; i < n; i++) {
    //     if (arr[i] == x) {
    //         cout << "Yes";
    //         return 0;
    //     }
    // }
    // cout << "No";
    cout << finder(n, arr, x);
    return 0;
}