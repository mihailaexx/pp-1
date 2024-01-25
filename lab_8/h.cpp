#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int end; cin >> end;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < end; i++) cout <<  arr[i] << " ";
    return 0;
}