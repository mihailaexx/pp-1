#include <bits/stdc++.h>
using namespace std;

void maximuum() {
    vector <int> arr(4);
    int maxi = -100000;
    for (int i = 1; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    cout << maxi;
}

int main() {
    maximuum();
    return 0;
}