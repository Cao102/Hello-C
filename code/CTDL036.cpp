#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005], circle;
void dfs(int x, int y){
    visited[x] = 1;
    for(int v: adj[x]){
        if(!visited[v]) dfs(v,x);
        else if(visited[v] && v != y) circle = 0;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        memset(adj,0,sizeof(adj));
        memset(visited,0,sizeof(visited));
        int n; cin >> n;
        circle = 1;
        for(int i = 1; i < n; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1,0);
        for(int i = 1; i <= n; i++){
            if(!visited[i]) circle = 0;
        }
        if(circle) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}