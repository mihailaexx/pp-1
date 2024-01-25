#include <bits/stdc++.h>
using namespace std;

int infinity(int sum = 0) {
    int temp; cin >> temp;
    if (temp == 0) {
        return sum;
    } else {
        return infinity(sum + temp);
    }
}

int main() {
    // int sum = 0, elem;
    // while (cin >> elem && elem != 0) {
    //     sum += elem;
    // }
    // cout << sum;
    cout << infinity();
    return 0;
}