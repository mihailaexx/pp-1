#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num, max_elem = -1000000000, max_i_index = 1000000000, max_j_index = 1000000000; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (arr[i][j] > max_elem) {
                max_elem = arr[i][j];
                max_i_index = i+1;
                max_j_index = j+1;
            }
        }
    }
    cout << max_i_index << " " << max_j_index;
    return 0;
}