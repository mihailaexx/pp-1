#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n,a,d,sum=0; cin >> n >> a >> d;
    for (int i = 0; i < n; i++) {
        cout << (a + i*d) << " ";
        sum += (a + i*d);
    }
    cout << endl << "sum: " << sum;
    return 0;
}