#include <bits/stdc++.h>
using namespace std;

string cheating(int n, int x, vector<int> arr, int i = 0) {
    if (i == n-1) {
        return "no";
    } else {
        if (arr[i] - arr[i+1] <= x) {
            return "cheater";
        } else {
            return cheating(n, x, arr, i+1);
        }
    }
}

int main() {
    int n, diff; cin >> n >> diff;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end(), greater<>());
    // for (int i = 0; i < n-1; i++) {
    //     if (arr[i] - arr[i+1] <= diff) {
    //         cout << "cheater";
    //         return 0;
    //     } 
    // }
    // cout << "no";
    cout << cheating(n, diff, arr);

    return 0;
}