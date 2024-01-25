#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i; cin >> N;
    int *arr = new int[N];
    for (i = 0; i < N; i++) {
        cin >> arr[i];
        cout << arr[i]*arr[i] << " ";
    }
    return 0;
}