#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (arr.empty()) arr.push_back(num);
        else if (find(arr.begin(), arr.end(), num) == arr.end()) arr.push_back(num);
    }
    do { 
        for (int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
        cout << endl; 
    } while (next_permutation(arr.begin(), arr.end()));
    
    return 0;
}