#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int maxim = *max_element(arr, arr + N);
    int minim = *min_element(arr, arr + N);
    for (int i = 0; i < N; i++) {
        if (arr[i] == maxim) {
            arr[i] = minim;
        }
        cout << arr[i] << " ";
    }
    return 0;
}