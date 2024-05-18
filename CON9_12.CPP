#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
int truoc[1005];
void bfs(int k){
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int u=q.front(); q.pop();
        visited[u]=false;
        for(int x: adj[u]){
            if(visited[x]){
                visited[x]=false;
                truoc[x]=u;
                q.push(x);
            }
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int v,e,m,n; cin>>v>>e>>m>>n;
        memset(visited,true,sizeof(visited));
        memset(truoc,0,sizeof(truoc));
        for(int i=0;i<e;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[x].push_back(y);
        }
        bfs(1);          
        if(truoc[n]==0) cout<<-1<<endl;
        else{
            vector<int> path;
            path.push_back(n);
            while(truoc[n]!=m){
            path.push_back(truoc[n]);
            n=truoc[n];
        }
        path.push_back(m);
        reverse(path.begin(),path.end());
        for(int i:path) cout<<i<<" ";
        } 
        for(int i=0;i<e;i++) adj[i].clear();
        cout<<endl;
    }
    return 0;
}