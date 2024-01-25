#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num, max_elem = -1000000000, sec_max_elem= -1000000000; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (arr[i][j] > max_elem && arr[i][j] != max_elem) {
                max_elem = arr[i][j];
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (arr[i][j] > sec_max_elem && arr[i][j] < max_elem) {
                sec_max_elem = arr[i][j];
            }
        }
    }
    if (sec_max_elem == -1000000000) {
        cout << 0;
    } else {
        cout << sec_max_elem;
    }
    return 0;
}