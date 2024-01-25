#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int target; cin >> target;
    string outp = (count(arr.begin(), arr.end(), target) > 0) ? "Yes" : "No";
    cout << outp;
    return 0;
}