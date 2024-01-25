#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i, j, num; cin >> N;
    vector < vector <int>  > arr(N); // создаем вектор из N векторов 0 длинны, это возмодно поскольку данная структура обладает динамическим размером.
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cin >> num;
            arr[i].push_back(num);
            cout << arr[i][j];
        }
    } // блок ввода матрицы.
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // } // вывод матрицы.
    return 0;
}