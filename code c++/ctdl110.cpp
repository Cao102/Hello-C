#include<bits/stdc++.h>
using namespace std;

vector<int> g[1001];
bool visit[1001];
int parent[1001];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visit[s] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!visit[v]) {
                visit[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}

vector<int> getPath(int s, int t) {
    vector<int> path;
    for (int v = t; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    if (path[0] == s) return path;
    return {-1};
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E, s, t;
        cin >> V >> E >> s >> t;
        for (int i = 1; i <= V; i++) {
            g[i].clear();
            visit[i] = false;
            parent[i] = -1;
        }
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        bfs(s);
        vector<int> path = getPath(s, t);
        if (path[0] == -1) cout << -1;
        else for (int v : path) cout << v << " ";
        cout << endl;
    }
    return 0;
}