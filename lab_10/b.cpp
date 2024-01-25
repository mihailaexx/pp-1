#include <bits/stdc++.h>
#include <cmath>
#define mnoga long long
using namespace std;
int num = 0;
mnoga power() {
    mnoga temp = 1; for (int i = 0; i < num; i++) temp*=num;
    num++;
    return temp;
}

int main() {
    int n; cin >> n;
    vector<mnoga> arr(n+1);
    generate(arr.begin(), arr.end(), power);
    for (int i = 0; i <= n; i++) cout << arr[i] << " ";
    return 0;
}