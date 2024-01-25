#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, i, j, grades_min=1000000000, grades = 0, grades_min_i =0, num; cin >> N >> K;
    vector < vector <int>  > arr(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < K; j++) {
            cin >> num;
            arr[i].push_back(num);
            grades += arr[i][j];
        }
        if (grades < grades_min) {
            grades_min = grades;
            grades_min_i = i+1;
        }
        grades = 0;
    }
    cout << grades_min_i;
    return 0;
}