#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int maxim = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxim) {
            maxim = arr[i];
        }
    }
    cout << maxim;
    return 0;
}