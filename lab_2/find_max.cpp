#include <iostream>
using namespace std;
int main() {
    int N, numb;
    cin >> N;
    int *out = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> out[i];
        if (out[i] > numb) {
            numb = out[i];
        }
    }
    cout << numb;
    return 0;
}