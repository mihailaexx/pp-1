/*

from 10inary to k-inary
0 - 48
1 - 49
2 - 50
...
9 - 57
A - 65
...
Z - 90
*/

#include <bits/stdc++.h>
using namespace std; 
int main() { 
    int t, r; 
    cin >> t >> r;
    string f;
    while(t != 0){
        if (t%r>=10)
        {
            f.push_back(char(t % r + 55));
        }
        else{
            f.push_back(char(t % r + 48));
        }
        t /= r;
    }
    reverse(f.begin(), f.end());
    cout << f;
    return 0; 
}