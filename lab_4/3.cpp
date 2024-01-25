#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, i, j, num, count = 0; cin >> N >> M;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (arr[i][j] < 0) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}