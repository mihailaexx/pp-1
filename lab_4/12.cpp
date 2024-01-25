#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, j, min_in_column, sum = 0, coord_i = 0, coord_j = 0, num; cin >> N >> K;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            cin >> num;
            arr[i].push_back(num);
        }
    }
    cout << "coordinates of min elements: " << endl;
    for (j = 0; j < K; j++) {
        min_in_column = 1000000000;
        for (i = 0; i < N; i++) {
            if (arr[i][j] < min_in_column) {
                min_in_column = arr[i][j];
                coord_i = i+1;
                coord_j = j+1;
            }
        }
        sum += min_in_column;
        cout << coord_i << ";" << coord_j << endl;
    }
    cout << endl << "Their sum:" << endl << sum;
    return 0;
}