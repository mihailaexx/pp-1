#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    vector<string> phoneNumbers;
    
    for (int i = 0; i < n; i++) {
        string inputNumber; cin >> inputNumber;
        if (inputNumber[0] == '+') {
            inputNumber = inputNumber.substr(1);
        } 
        phoneNumbers.push_back(inputNumber);
    }

    sort(phoneNumbers.begin(), phoneNumbers.end());
    for (int i = 0; i < n; i++) {
        if (count(phoneNumbers.begin(), phoneNumbers.end(), phoneNumbers[i]) == 3) {
            sum+=1;
            i+=2;
        }
    }
    cout << sum;
    return 0;
}