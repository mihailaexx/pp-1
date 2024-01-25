#include <bits/stdc++.h>
using namespace std;
int main() {
    long int N; cin >> N;
    long int *arr = new long int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    set<int>outp(arr, arr + N);
    for (auto i = outp.begin(); i != outp.end(); i++) {
        cout << *i << " ";
    }
    return 0;
}