#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> arr_copy(arr);
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) if (arr_copy[i] != arr[i]) cout << "Instead of " << arr_copy[i] << " here was " << arr[i] << endl;
    else cout << "OK" << endl;
    return 0;
}