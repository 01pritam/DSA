#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> dist(n + 1, -1), paths(n + 1, 0);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    paths[1] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : graph[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                paths[v] = paths[u];
                q.push(v);
            } else if (dist[v] == dist[u] + 1) {
                paths[v] += paths[u];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << paths[i] << " ";
    }
    cout << endl;
}