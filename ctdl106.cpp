#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool check[1005];
void dfs(int u){
    check[u]=1;
    cout<<u<<" ";
    for(int x:adj[u]){
        if(!check[x]) dfs(x);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
        }
        memset(check,0,sizeof(check));
        dfs(k);
        cout<<endl;
        for(int i=1;i<=n;i++) adj[i].clear();
    }
    return 0;
}