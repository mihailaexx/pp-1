#include <bits/stdc++.h>
using namespace std;

void find_book_in_library() {
    int n = 0, x = 0, i = 0; cin >> n;
    vector <int> arr(n); for (i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
    if (count(arr.begin(), arr.end(), x) != 0) cout << "YES";
    else cout << "NO";
}

int main() {
    find_book_in_library();
    return 0;
}