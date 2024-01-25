#include <bits/stdc++.h>
using namespace std;

void zikl(int num) {
    string str;
    while(num){
        if(num & 1) str+='1';
        else str+='0';
        num>>=1;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
}

void toBinary(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (auto &chislo : arr) zikl(chislo);
}

int main() {
    int n;
    cin >> n;
    toBinary(n);
    return 0;
}