#include <bits/stdc++.h>
using namespace std;


int main() {
    string str; cin >> str;
    stack<char> stk;
    vector<char> temp;
    vector<char> answ;
    for (char c : str) {
        stk.push(c);
    }
    while (stk.size() != 0) {
        if (stk.size() == 1) {
            temp.push_back(stk.top());
            stk.pop();
            break;
        }
        char b = stk.top(); // последнее число
        stk.pop();
        char a = stk.top(); // предпоследнее число
        int c = (a - '0')*10 + (b - '0');
        if (sqrt(c) == round(sqrt(c))) {
            answ += temp;
            stk.pop();
            if (!temp.empty()) {
                for (char k : temp) stk.push(k);
                temp.clear();
            }
        } else {
            temp.push_back(b);
        }
    }
    if (temp.size() == 0) cout << "Stack is empty";
    else for (char k : temp) cout << k;
    return 0;
}