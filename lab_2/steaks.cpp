#include <iostream>
#include <cmath>
using namespace std;

int main() {
    /*
    n = один стейк одна сторона 1 минута => один стейк 2 минуты
    k = колличество стейков которое может жаритсья одновременно
    */
   int n,k; cin >> n >> k;
   if (n > k) {
        cout << ceil(n * 2.0 / k);
   } else {
    cout << 2;
   }
    return 0;
}