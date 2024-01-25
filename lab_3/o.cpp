#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i; cin >> N;
    int *arr = new int[N];
    for (i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);
    for (int i = N - 1; i != -1; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}