#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    set<int>outp(arr.begin(), arr.end());
    cout << outp.size();
    return 0;
}