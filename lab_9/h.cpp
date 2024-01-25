#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n; string x; cin >> n;
    // vector<string> arr;
    // vector<string> arr_n;
    // for (int i = 0; i < n; i++) {
    //     cin >> x; arr.push_back(x);
    //     if (count(arr.begin(), arr.end(), x) == 1) arr_n.push_back(x + " " + to_string(i+1));
    // }
    // sort(arr_n.begin(), arr_n.end());
    // for (int i = 0; i < arr_n.size(); i++) {
    //     cout << arr_n[i] << endl;
    // }
    map<string, int> slovar;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        map<string, int>::iterator it = slovar.find(x);
        if (it != slovar.end()) {
            slovar[x] = it->second;
            continue;
        }
        slovar[x] = i+1;
    }
    
    for (auto c : slovar) {
        cout << c.first << " " << c.second << endl;
    }

    return 0;
}
