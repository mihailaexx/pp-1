#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++) {
        int act; string name; cin >> act; if (act == 1) {
            cin >> name;
            arr.push_back(name);
        }
        else arr.erase(arr.begin());
        if (arr.size() > 0) cout << arr[0] << endl;
        else cout << "queue is empty" << endl;  
    }
    return 0;
}