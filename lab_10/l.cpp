#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sizee = 0, counter = 0; cin >> n;
    for (int i = 1; i <= n; i++) sizee += i;
    vector<int> arr(sizee);

    for (int i = 1; i <= n; i++) {
        fill(arr.begin()+counter, arr.begin()+i+counter, i);
        counter+=i;
    }

    for (int i = 0; i < sizee; i++) cout << arr[i] << " ";
    return 0;
}