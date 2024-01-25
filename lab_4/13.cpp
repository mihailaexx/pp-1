#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i=0, j=0, num=1; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            arr[i].push_back(0);
        }
    }
    /* 
        k - starting row index
        right_side - ending row index
        l - starting column index
        bottom_side - ending column index
        i - iterator
        num - number for output
    */
    int k = 0, right_side = N, l = 0, bottom_side = N;
    while (k < right_side && l < bottom_side) {
        for (i = l; i < bottom_side; i++) {
            arr[k][i] = num;
            num += 1;
        }
        k++;
        for (i = k; i < right_side; i++) {
            arr[i][bottom_side - 1] = num;
            num += 1;
        }
        bottom_side--;
        if (k < right_side) {
            for (i = bottom_side - 1; i >= l; i--) {
                arr[right_side - 1][i] = num;
                num += 1;
            }
            right_side--;
        }
        if (l < bottom_side) {
            for (i = right_side - 1; i >= k; i--) {
                arr[i][l] = num;
                num += 1;
            }
            l++;
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}