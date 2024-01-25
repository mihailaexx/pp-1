// 5 4
// 5 5 4 3 2
// 4 5 4 3

// 5 4
// 5 4 3 2
// 4 5 4 3

// 5 4
// 5 4 4 5 3 4 2 3

// 5 4
// 5 4 5 3 4 2 3

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define for(i, x) for (int i = 0; i < x; i++)
#define pb push_back

void uniqq(vi &x) {
    vi::iterator it;
    it = unique(x.begin(), x.end());
    x.resize(distance(x.begin(), it));
}

int main() {
    int n, m; cin >> n >> m;
    vi arr1(n); for (i, n) cin >> arr1[i]; 
    vi arr2(m); for (i, m) cin >> arr2[i]; 
    uniqq(arr1); uniqq(arr2);
    vi answ(arr1.size() + arr2.size());
    for (i, arr1.size()) {
        answ[2*i] = arr1[i];
    }
    for (i, arr2.size()) {
        answ[2*i+1] = arr2[i];
    }
    uniqq(answ);
    for (i, answ.size()) cout << answ[i] << " ";
    return 0;
}