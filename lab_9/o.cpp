#include <bits/stdc++.h>
using namespace std;

int main() {
    string log, pass;
    map<string, string> database;
    
    
    int n; cin >> n; // correct data
    for (int i = 0; i < n; i++) {
        cin >> log >> pass;
        database[log] += pass;
    }
    int m; cin >> m; // requests
    for (int i = 0; i < m; i++) {
        cin >> log >> pass;
        map<string, string>::iterator it = database.find(log);
        if (it != database.end()) {
            if (it->second == pass) cout << "correct password" << endl;
            else cout << "password error" << endl;
        }
        else cout << "login error" << endl;
    }
    return 0;
}