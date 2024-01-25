#include <bits/stdc++.h>
using namespace std;
int main() {
    long int N, target, temp; cin >> N >> target;
    long int *arr = new long int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; // there are no copies in array
        if (target > arr[i]) {
            temp = i+1;
        }
        if (target == arr[i]) {
            temp = i;
            break;
        }
    }
    cout << temp;
    return 0;
}