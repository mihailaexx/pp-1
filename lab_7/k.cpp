#include <bits/stdc++.h>
using namespace std;

int maxDig(string &a, int maxim = -1, int i = 0) {
    if (i == a.size() || maxim == 9) {
        return maxim;
    } else {
        int temp = a[i] - '0';
        if (maxim < temp) {
            return maxDig(a, maxim = temp, i+1);
        }
        return maxDig(a, maxim, i+1);
    }
}

int main() {    
    string a; cin >> a;
    // sort(a.begin(), a.end());
    // cout << a[a.size()-1];
    cout << maxDig(a);
    return 0;
}