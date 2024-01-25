#include <bits/stdc++.h>
using namespace std;
#define for(i, j, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)

int main() {
    int i, j, n, m; cin >> n >> m;
    int arr[n][m];
    for(i, j, n, m) cin >> arr[i][j];
    for(i, j, n-1, m-1) if ((arr[i][j] == 0 && arr[i+1][j] == 0 && arr[i][j+1] == 0 && arr[i+1][j+1] == 0) || (arr[i][j] == 1 && arr[i+1][j] == 1 && arr[i][j+1] == 1 && arr[i+1][j+1] == 1)) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}