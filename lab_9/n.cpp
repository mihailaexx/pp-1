#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, counter = 0; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (count(arr.begin(), arr.end(), arr[i] ^ arr[j]) > 0) counter += 1;
        }
    }
    cout << counter;
    return 0;
}

/*
4
1 2 3 4

1 ^ 2 arr[0] ^ arr[1]
1 ^ 3 arr[0] ^ arr[2]
1 ^ 4 arr[0] ^ arr[3]
2 ^ 3
2 ^ 4
3 ^ 4
*/