#include <iostream>
#include <cmath>
using namespace std;

int main()  {
    int N, arr[4], i;
    cin >> N;
    i = 0;
    while (N > 0) {
        arr[i] = N % 2;
        N /= 2;
        i += 1;
    }
    while (i != 0) {
        N += arr[4-i] * pow(2,i-1);
        i -= 1;
    }
    cout << N;
    return 0;
}