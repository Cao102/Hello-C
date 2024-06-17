#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
void bfs(int k){
    queue<int> q;
    q.push(k);
    while(q.size()){
        int u = q.front(); q.pop();
        if(!visited[u]){
              cout << u << " ";
            visited[u] = true;
        }
        for(int x: adj[u]){
            if(!visited[x]){
                cout << x << " ";
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        int v,e,k; cin >> v >> e >> k;
        for(int i = 0; i < e; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        bfs(k);
    }
    return 0;
}