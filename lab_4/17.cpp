#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i = 0, j = 0, num; cin >> N;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N-i-1; j++) {
            cout << ".";
        }
        for (j = 0; j < 2*i + 1; j++) {
            cout << "*";
        }
        for (j = 0; j < N-i-1; j++) {
            cout << ".";
        }
        cout << endl;
    }
}