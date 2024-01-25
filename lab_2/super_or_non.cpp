#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N % 2 == 1) {
        cout << "Super";
    } else {
        if (N >= 2 && N <= 5) {
            cout << "Not Super";
        } else if (N >= 6 && N <= 20) {
            cout << "Super";
        } else {
            cout << "Not Super";
        }
    }
    return 0;
}