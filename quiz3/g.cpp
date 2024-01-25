#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int n;
    cin >> n;
    char c[n];
    int count[n];

    for (int i = 0; i < n; i++){
        cin >> c[i];
        count[i] = 0;
    }
    sort(c, c+n);
    for (int i = 0; i < s.size(); i++){
        for (int j = 0; j < n; j++){
            if (s[i] == c[j]) {
                count[j]++;
                break;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << c[i] << " - " << count[i] << endl;
    }

    return 0;

}