#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];

void bfs(int x){
    queue<int> q;
    q.push(x);
    visited[x] = true;
    while(q.size()){
        int u = q.front(); q.pop();
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,false,sizeof(visited));
        int V, E; 
        cin >> V >> E;
        for(int i = 0; i < E; i++){
            int  x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[x].push_back(y);
        }
        for(int i = 1; i <= V; i++) sort(adj[i].begin(), adj[i].end());
        int result = 0;
        for(int i = 1; i <= V; i++){
            if(visited[i] == false){
                result++;
                bfs(i);
            }
        }
        cout << result << endl;
        for(int i = 1; i <= V; i++) adj[i].clear();
    }
    return 0;
}