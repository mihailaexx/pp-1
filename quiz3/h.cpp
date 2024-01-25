#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string name; int price, quality;
    map <double, string> telefoni;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> price >> quality;
        double y = price/quality;
        telefoni[y] = name;
    }
    map<double, string>::iterator it = telefoni.begin();
    cout << it->second;
    return 0;
}