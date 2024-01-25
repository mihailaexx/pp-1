#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, i=0; cin >> N;
    vector <int> arr(N);
    for (i = 1; i < N; i++) {
        arr[i] = i+1;
        if (arr[i] == 2 || arr[i] == 3) {
            cout << arr[i] << " is prime" << endl;
        } else {
            string answ = " is prime";
            for (int j = 2; j <= arr[i]/2; j++) {
                if (arr[i] % j == 0) {
                    answ = "";
                    break;
                }
            }
            if (answ != "") {
                cout << arr[i] << answ << endl;
            }
        }
    }
    return 0;
}