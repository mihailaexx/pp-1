#include <bits/stdc++.h>
using namespace std;


int main() {
    int x1, y1; cin >> x1 >> y1;
    int n; cin >> n; 
    multimap<float, pair<int, int> > points;
    for (int i = 0; i < n; i++) {
        int x2,y2; cin >> x2 >> y2;
        float distance = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
        points.insert(make_pair(distance, make_pair(x2, y2)));
    }
    for (const auto point : points) {
        cout << point.second.first << " " <<  point.second.second << endl;
    }
    return 0;
}