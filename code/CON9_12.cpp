#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
int truoc[1005];
int s, e;

void bfs(int x){
    queue<int> q;
    q.push(x);
    visited[x] = true;
    while(q.size()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                truoc[v] = u;
                q.push(v);
            }
        }
    }
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        memset(truoc, 0, sizeof(truoc));
        int V, E;
        cin >> V >> E;
        cin >> s >> e;
        for(int i = 0; i < E; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        vector<int> path;
        if(truoc[e] == 0) cout << -1 << endl;
        else{
            path.push_back(e);
            while(truoc[e] != s){
                path.push_back(truoc[e]);
                e = truoc[e];
            }
            path.push_back(s);
            reverse(path.begin(), path.end());
            for(int i : path) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}