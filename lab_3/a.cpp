#include <iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 1) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}