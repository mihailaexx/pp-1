#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    set<int>outp(arr.begin(), arr.end());
    set<int>::iterator it = outp.begin();
    while (it != outp.end()) {
        if (*it % 2 == 0) it = outp.erase(it);
        else it++;
    }
    for (int c : outp) cout << c << " ";
    return 0;
}