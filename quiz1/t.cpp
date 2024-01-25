#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        cin >> arr[i];
        for (int j = 0; j < arr[i].size(); j++) {
            sum += arr[i][j]-48;
        }
        cout << ((sum % 2 == 0) ? "Sum of digits is even!" : "Sum of digits is odd!") << endl; 
    }
    return 0;
}
