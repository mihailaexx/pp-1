/*
[*]
[*][*]
[*][*][*]
[*][*][*][*]
[*][*][*][*][*]

i = 1
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, j, num; cin >> N;
    vector < vector <int>  > arr(N);
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < i+1; j++) {
            cout << "[*]";
        }
        cout << endl;
    }
    return 0;
}