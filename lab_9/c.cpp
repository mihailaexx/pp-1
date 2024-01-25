#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum=0; cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (count(arr.begin(), arr.end(), arr[i]) >= 2) {
            sum++;
            i+=count(arr.begin(), arr.end(), arr[i])-1;
        }
    }
    cout << sum;
    return 0;
}
