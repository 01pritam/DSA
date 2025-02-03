#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> pos;
    for (int i = 0; i < m; i++) {
        if (b[i] == 1 || b[i] == 3) {
            pos.push_back(i);
        }
    }

    int mini = INT_MAX;
    for (int i = 0; i < m; i++) {
        int cost = 0;
        for (int j : pos) {
            cost += abs(i - j);
        }
        mini = min(mini, cost);
    }

    cout << mini << endl;
}