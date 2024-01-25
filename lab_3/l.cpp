#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, j; cin >> N;
    long int *outp = new long int[1000000];
    for (i = 0; i < N; i++) {
        cin >> outp[i];
    }
    int K; cin >> K;
    for (i = N; i < N+K; i++) {
        cin >> outp[i];
    }
    sort(outp, outp + (N+K));
    for (i = 0; i < N+K; i++) {
        cout << outp[i] << " ";
    }
}


