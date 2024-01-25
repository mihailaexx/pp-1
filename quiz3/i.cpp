#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string osnova, zamena, otvet;
    char a;
    cin >> osnova >> zamena >> a;
    for (int i = 0; i < osnova.size(); i++) {
        if (*find(zamena.begin(), zamena.end(), osnova[i])) {
            otvet.push_back(a);
        } else {
            otvet.push_back(osnova[i]);
        }
    }
    cout << otvet;
    return 0;

}