#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, j, num; cin >> N >> K;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (sqrt(arr[i][j]) == round(sqrt(arr[i][j]))) {
                arr[i][j] = sqrt(arr[i][j]); 
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