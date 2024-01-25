#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i = 0, j = 0, num, sum = 0; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (j == N-i-1) {
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}