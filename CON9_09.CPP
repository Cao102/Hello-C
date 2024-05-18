#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
void bfs(int k){
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int u=q.front(); q.pop();
        if(visited[u]){
            cout<<u<<" ";
            visited[u]=false;
        }
        for(int x: adj[u]){
            if(visited[x]){
                cout<<x<<" ";
                visited[x]=false;
                q.push(x);
            }
        }
    }
}
int main(){
    int t; //
    cin>>t;
    while(t--){
        int v,e,k; cin>>v>>e>>k;
        memset(visited,true,sizeof(visited));
        for(int i=0;i<e;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
        }
        bfs(k);
        cout<<endl;
    }
    return 0;
}