#include <bits/stdc++.h>
using namespace std;

int main() {
    long int N, sum = 0; cin >> N;
    long int *arr = new long int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
