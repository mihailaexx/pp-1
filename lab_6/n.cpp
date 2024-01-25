#include <bits/stdc++.h>
using namespace std;

void m_transport() {
    int n, m, num = 0; cin >> n >> m;
    vector < vector <int>  > arr(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            arr[i].push_back(num);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    m_transport();
    return 0;
}