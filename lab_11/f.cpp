#include <bits/stdc++.h>
using namespace std;

void findDeliteli(int a, int b, int n) {
    vector<int> arr;
    for (int i=1; i <=  min(a,b); i++) {
        if (a % i == 0 && b % i == 0) arr.push_back(i);
    }
    cout << arr[arr.size()-n];
}

int main() {
    int a,b, n; cin >> a >> b >> n;
    findDeliteli(a,b,n);
    return 0;   
}