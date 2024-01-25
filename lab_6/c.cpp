#include <bits/stdc++.h>
using namespace std;

void two_arr_sames() {
    long int n, i = 0, answ = 0; cin >> n;
    vector <long int> arr1(n), arr2(n);
    for (i = 0; i < n; i++) cin >> arr1[i];
    for (i = 0; i < n; i++) cin >> arr2[i];
    sort(arr1.begin(), arr1.end()); sort(arr2.begin(), arr2.end());
    for (i = 0; i < n; i++) {
        long int ina = count(arr1.begin(), arr1.end(), arr1[i]);
        long int inb = count(arr2.begin(), arr2.end(), arr1[i]);
        answ += min(ina,inb);
        if (min(ina,inb) != 0) i+= ina-1;
    }
    cout << answ;
}

int main() {
    two_arr_sames();
    return 0;
}