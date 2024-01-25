#include <bits/stdc++.h>
using namespace std;

float find_gpa(int a) {
    if (a >= 0 && a <= 49) return 0;
    if (a >= 50 && a <= 54) return 1;
    if (a >= 55 && a <= 59) return 1.3333333333333333;
    if (a >= 60 && a <= 64) return 1.6666666666666665;
    if (a >= 65 && a <= 69) return 1.9999999999999998;
    if (a >= 70 && a <= 74) return 2.333333333333333;
    if (a >= 75 && a <= 79) return 2.6666666666666665;
    if (a >= 80 && a <= 84) return 3;
    if (a >= 85 && a <= 89) return 3.3333333333333335;
    if (a >= 90 && a <= 94) return 3.666666666666667;
    if (a >= 95 && a <= 100) return 4;
}

int main() {
    int first, second, final, credit;
    double gpa = 0;
    int credits = 0;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> first >> second >> final >> credit;
        credits += credit;
        if (first + second < 30 || final < 20) gpa += 0;
        else gpa += find_gpa(first + second + final) * credit;
    }
    
    cout << gpa / credits;
    return 0;   
}