#include <iostream>
using namespace std;
int main() {
    int N, counter = 0;
    cin >> N;
    int out[N];
    for (int i = 0; i < N; i++) {
        cin >> out[i];
        while (out[i] > 9) {
            if (out[i] % 10 == 0) {
                counter++;
            }
            out[i] /= 10;
        }
    }
    cout << counter;
    return 0;
}