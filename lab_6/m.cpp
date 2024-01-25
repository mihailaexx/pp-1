#include <bits/stdc++.h>
using namespace std;

void obrat() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = n-1; i != -1; i--) cout << arr[i] << " ";
}

int main() {
    obrat();
    return 0;
}