#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int x; cin >> x;
    arr.erase(arr.begin()+x);
    for (int i = 0; i < n-1; i++) cout << arr[i] << " ";
    return 0;
}