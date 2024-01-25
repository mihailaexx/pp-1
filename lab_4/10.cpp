#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, j, num; cin >> N >> K;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            cin >> num;
            arr[i].push_back(num);
            if ((i+j) % 2 == 0) {
                arr[i][j] +=1;
            } else {
                arr[i][j] -=1;
            }
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0 ; j < K; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
    return 0;
}