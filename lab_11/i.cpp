#include <bits/stdc++.h>
using namespace std;

bool ZAVARUDO(string s) {
    set<char> proverka(s.begin(), s.end());
    int x = 0;
    for (const auto c : proverka) {
        int countt = count(s.begin(), s.end(), c);
        if (countt % 2 == 1) x++;
        if (x > 1) return false;
    }
    return true;
}

int main() {
    string s; cin >> s;
    if (ZAVARUDO(s)) cout << "ZA WARUDO TOKI WO TOMARE";
    else cout << "JOJO";
    return 0;
}

 /*
    ?1
    вывод YES
    количество всех букв одинаковое
    ?2
    вывод YES
    количество одной буквы отличается от всех
    ?3
    вывод NO
    количество больше чем одной буквы отличается от остальных

    ?4 четные и нечетные


    aabc => no
    abcd => no
    

    !суть
    будем добавлять колличества букв в set<int> и проверять его длинну каждый раз
    если длинна set > 2 то NO
    иначе YES
*/