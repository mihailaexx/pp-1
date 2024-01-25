#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j == N-i-1) {
                cout << i+1;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}