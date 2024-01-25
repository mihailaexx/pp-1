/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
        }
    }
    int max_elem = arr[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] > max_elem) {
                max_elem = arr[i][j];
            }
        }
        cout << endl;
    } 
    return 0;
}
*/

// V0.9

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num, max_elem = -1000000000; cin >> N;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            if (arr[i][j] > max_elem) {
                max_elem = arr[i][j];
            }
        }
    }
    cout << max_elem;
    return 0;
}