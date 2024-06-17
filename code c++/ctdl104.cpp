#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool check[1005];
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
        }
        for(int u=1;u<=n;u++){
            cout<<u<<": ";
            for(int x:adj[u]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++) adj[i].clear();
    }
    return 0;
}