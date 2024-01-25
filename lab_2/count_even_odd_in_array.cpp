#include <iostream>
using namespace std;
int main() {
    int N, numb, n_even = 0, n_odd = 0;
    cin >> N;
    int *out = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> out[i];
        if (out[i] % 2 == 1) {
            n_odd += 1;
        } else {
            n_even += 1;
        }
    }
    cout << n_even << " " << n_odd;
    return 0;
}