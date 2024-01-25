/*
str 123321
str[i] => (int)str[i] and add to vetctor 
sort vector === {1,1,2,2,3,3}
temp = amount of i=0 elem === temp = 2
тикать цикл с плюсом этого i === for (int i = 0; i < size/temp-1)
проверять 
*/

/*
333233322222 => sorted => 222222333333
                          0123456789
temp = 6
size = 12
for (i=0, i<2-1)
if (temp = count(arr.begin(),arr.end(), arr[temp]))
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin,s);
    int N = s.size(), i;
    sort(s.begin(), s.end());
    int temp = count(s.begin(),s.end(), s[0]);
    for (i = 1; i < N/temp; i++) {
        if (temp == count(s.begin(),s.end(), s[temp*i])) temp = count(s.begin(),s.end(), s[temp*i]);
        else { 
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}