#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void arr_diff() {
    int n = 0, i = 0; cin >> n;
    vector <int> arr1(n);
    vector <int> arr2(n);
    for (i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (i = 0; i < n; i++) {
        cout << abs(arr1[i]-arr2[i]) << " ";
    }
}

int main() {
    arr_diff();
    return 0;
}