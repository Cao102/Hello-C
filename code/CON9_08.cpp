#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];

void bfs(int k){
    queue<int> q;
    q.push(k);
    while(q.size()){
        int u = q.front(); q.pop();
        if(!visited[u]) cout << u << " ";
        visited[u] = true;
        for(int x: adj[u]){
            if(!visited[x]){
            q.push(x);
            visited[x] = true;
            cout << x << " ";
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int v,e,k;
        cin >> e >> v >> k;
        for(int i = 0; i < v; i++){
            int x,y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(k);
    }
     return 0;
}