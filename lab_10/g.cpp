#include <bits/stdc++.h>
using namespace std;

struct Team {
    public:
    string name1; int score1;
    string name2; int score2;
    Team(string pname1, int pscore1, string pname2, int pscore2) {
        name1 = pname1;
        score1 = pscore1;
        name2 = pname2;
        score2 = pscore2;
    }
};


int main() {
    set<Team> hackathon;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string name1, name2; int score1, score2; 
        cin >> name1 >> score1 >> name2 >> score2;
        Team a(name1, score1, name2, score2);
        hackathon.insert(a);
    }
    cout << endl;

    for(const auto c : hackathon) cout << c.name1 << " " << c.score1 << " " << c.name2 << " " << c.score2 << endl;
    return 0;   
}