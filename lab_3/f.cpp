#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N - 1; i != -1; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}