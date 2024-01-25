#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (vector<int> v){
    for (int i = 0; i < v.size()/2; i++) {
        if (v[i] != v[v.size()-1 - i]) {
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    do{
        if(isPalindrome(arr)){
            for(int i = 0;i<arr.size();i++) {
                cout << arr[i] << " ";
            }
            return 0;
        }
    } while(next_permutation(arr.begin(), arr.end()));
    cout << "Impossible" << endl;
    return 0;
}