#include <iostream>
using namespace std;

int main() {
    int N, count = 0; cin >> N;
    int *arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}

/*

*/