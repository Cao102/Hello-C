#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool check[1005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u]=1;
    while(!q.empty()){
        int x=q.front(); q.pop();
        cout<<x<<" ";
        for(int v:adj[x]){
        if(!check[v]){
            q.push(v);
            check[v]=1;
        }  
    }
    }
    
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(check,0,sizeof(check));
        bfs(k);
        for(int i=1;i<=n;i++) adj[i].clear();
        cout<<endl;
    }
    return 0;
}