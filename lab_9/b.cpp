#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, num; cin >> n;
    vector<int> arr_even;
    vector<int> arr_odd;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0) arr_even.push_back(num);
        else arr_odd.push_back(num);
    }
    sort(arr_even.begin(), arr_even.end(), greater<>());
    sort(arr_odd.begin(), arr_odd.end());
    for (int i = 0; i < arr_even.size(); i++) cout << arr_even[i] << " ";
    for (int i = 0; i < arr_odd.size(); i++) cout << arr_odd[i] << " ";
    return 0;
}
