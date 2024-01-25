#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long int n, number, minimum, temp = 0; cin >> n;
//     vector<long long int> arr;

//     for (long long int i = 0; i <= n; i++) {
//         if (i!=n) {
//             cin >> number;
//             if (number == 1) 
//             if (arr.size() == 0) continue;
//             else {
//                 minimum = *min_element(arr.begin(), arr.end());
//                 if (temp <= minimum * arr.size()) temp = minimum * arr.size();
//                 arr.clear();
//             }
//             else arr.push_back(number);
//         }
//         else {
//             minimum = *min_element(arr.begin(), arr.end());
//             if (temp <= minimum * arr.size()) temp = minimum * arr.size();
//         }
//     }
//     cout << temp;
//     return 0;
// }


#include <stack>
using namespace std;

int largestRectangleArea(int heights[], int n) {
    stack<int> s;
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[i] < heights[s.top()]) {
            int height = heights[s.top()];
            s.pop();
            int width = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        s.push(i);
    }

    while (!s.empty()) {
        int height = heights[s.top()];
        s.pop();
        int width = s.empty() ? n : n - s.top() - 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}

int main() {
    int n;
    cin >> n;
    int heights[n];

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int result = largestRectangleArea(heights, n);
    cout << result << endl;

    return 0;
}