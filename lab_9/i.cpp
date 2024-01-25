#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; string user; cin >> n;
    vector<string> arr;
    
    for (int i = 0; i < n; i++) {
        cin >> user;
        arr.push_back(user);
        if (count(arr.begin(), arr.end(), user) == 1) cout << "new user added" << endl;
        else cout << "user already exists" << endl;
    }

    return 0;
}
