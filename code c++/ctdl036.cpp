#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],check[1005],cycle,n;
void dfs(int u,int p){
    check[u]=1;
    for(int v=1;v<=n;v++){
    if(a[u][v]){
        if(!check[v]) dfs(v,u);
        else if(check[v]&&v!=p) cycle=1;
        } 
    }    
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cycle=0;
        memset(a,0,sizeof(a));
        memset(check,0,sizeof(check));
        for(int i=1;i<n;i++){
            int x,y; cin>>x>>y;
            a[x][y]=1; a[y][x]=1;
        }
        dfs(1,0);
        for(int i=1;i<=n;i++){
            if(!check[i]) cycle=1;
        }
        if(cycle) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}