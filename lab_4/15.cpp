#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, max_elem = -1000000000, max_i_index = 0, max_j_index = 0, num; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (i == j && arr[i][j] > max_elem) {
                max_elem = arr[i][j];
                max_i_index = i+1;
                max_j_index = j+1;
            }
        }
    }
    cout << "Maximum element is: " << max_elem << " with coordinates: " << max_i_index << ";" << max_j_index;
    return 0;
}