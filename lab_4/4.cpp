#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num; cin >> N;
    vector < vector <int>  > arr(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || j == 0) {
                cout << i + j << " ";
            } else {
                cout << i * j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}