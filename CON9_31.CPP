#include<bits/stdc++.h>

using namespace std;

vector<int> v[1005];
bool visited[1005];
int ok;

void bfs(int i){
    queue<int> q;
    q.push(i);
    while(q.size()){
        int u = q.front(); q.pop();
        visited[u] = 1;
        for(int x : v[u]){
            if(!visited[x]){
               q.push(x);
               visited[x] = 1; 
            }
            
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited, 0, sizeof(visited));
        int n, x, y;
        ok = 0;
        cin >> n;
        for(int i = 1; i < n; i++){
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        bfs(1);
        for(int i = 2; i <= n; i++){
            if(!visited[i]){
                ok = 1;
            } 
        }
        if(ok) cout << "NO" << endl;
        else cout << "YES" << endl;
        for(int i = 1; i <= n; i++) v[i].clear();
    }
    return 0;
}