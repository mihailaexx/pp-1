#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void percent_of_girls() {
    double all, n; cin >> all >> n;
    cout << setprecision(6) << (n*100/all);
}

int main() {
    percent_of_girls();
    return 0;
}