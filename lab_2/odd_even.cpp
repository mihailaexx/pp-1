#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N % 2 == 1) {
        cout << "Odd";
    } else if (N % 2 == 0 && N != 0) {
        cout << "Even";
    } else {
        cout << "None";
    }
    return 0;
}