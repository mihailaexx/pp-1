#include <bits/stdc++.h>
using namespace std;

void bolshe() {
    char s; cin >> s;
    if (s >= 97 && s <= 122) s -= 32;
    cout << s;
}

int main() {
    bolshe();
    return 0;
}