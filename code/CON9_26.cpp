#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
bool ok;
int svs[1005];
void bfs(int x){
    queue<int> q;
    q.push(x);
    visited[x] = false;
    while(q.size() && ok){
        int u = q.front(); q.pop();
        for(int v: adj[u]){
            if(visited[v]){
                visited[v] = false;
                svs[v] = u;
                q.push(v);
            }
            else{
                if(svs[v] != u){
                    ok =  0;
                    return ;
                }
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,true,sizeof(visited));
        ok = 1;
        int V, E;
        cin >> V >> E;
        for(int i = 0; i < E; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= V && ok; i++){
            if(visited[i]) bfs(i);
        }
        if(ok == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}