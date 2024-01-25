#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int poss, x; cin >> poss >> x;
    arr.insert(arr.begin()+poss, x);
    for (int i = 0; i < n+1; i++) cout << arr[i] << " ";
    return 0;
} 