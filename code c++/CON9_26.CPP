#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];
bool visited[1005];
int svs[1005] ,ok;

void bfs(int k){
    visited[k] = 1;
        for(int x: adj[k]){
            if(!visited[x]){
                svs[x] = k;
                bfs(x);
            }
            else if(k != svs[x]){
                ok = 1;
                return;
            }
        }
    }
int main(){
    int t;
    cin >>t;
    while(t--){
        memset(visited, 0, sizeof(visited));
        int e, v, ok = 0;
        cin >> e >> v;
        for(int i = 0; i < v; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= e; i++){
            if(!visited[i] && ok == 0) bfs(i);
        }
        if(ok == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        for(int i = 1; i <= e; i++) adj[i].clear();
    }
    return 0;
}