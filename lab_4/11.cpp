#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, j, sum_row = 0, sum_colum = 0, num; cin >> N >> K;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            cin >> num;
            arr[i].push_back(num);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            sum_row += arr[i][j];
        }
        cout << "The sum of row number " << i+1 << " is " << sum_row << endl; sum_row = 0;
    }
    for (j = 0; j < K; j++) {
        for (i = 0; i < N; i++) {
            sum_colum += arr[i][j];
        }
        cout << "The sum of column number " << j+1 << " is " << sum_colum << endl; sum_colum = 0;
    }
    return 0;
}