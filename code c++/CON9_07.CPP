#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[10005];
void dfs(int k){
    if(visited[k]) cout<<k<<" ";
    visited[k]=false;
    for(int x:adj[k]){
        if(visited[x]){
            cout<<x<<" ";
            visited[x]=false;
            dfs(x);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int v,e,k; cin>>v>>e>>k;
        memset(visited,true,sizeof(visited));
        for(int i=0;i<e;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
        }
        dfs(k);
        cout<<endl;
    }
    return 0;
}