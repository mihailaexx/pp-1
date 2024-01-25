#include <bits/stdc++.h>
using namespace std;
int main() {
    int x=0; cin >> x;
    
    if (sqrt(x) == round(sqrt(x))) {
        cout << "Yes"; 
    } else {
        cout << "No"; 
    }
    return 0;
}