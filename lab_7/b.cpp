#include <bits/stdc++.h>
using namespace std;

string toBinary(int a, string &answer) {
    if (a <= 0) {
        reverse(answer.begin(), answer.end());
        return answer;
    } else {
        answer.push_back((a % 2)+48);
        return toBinary(a / 2, answer);
    }
}

int main() {
    int a, temp; cin >> a;
    string outp;
    // while (a != 0) {
    //     temp = char((a % 2)+48);
    //     a/=2;
    //     outp.push_back(temp);
    // }
    // reverse(outp.begin(), outp.end());
    // cout << outp;
    cout << toBinary(a, outp);

    return 0;
}