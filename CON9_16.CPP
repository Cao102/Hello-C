#include<bits/stdc++.h>

using namespace std;
vector<int> adj[1005];
bool visited[1005];
void bfs(int k){
    queue<int> q;
    q.push(k);
    while(q.size()){
        int u=q.front(); q.pop();
        visited[u]=true;
        for(int x:adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(visited,false,sizeof(visited));
        int e,v,dem=0;
        cin>>v>>e;
        for(int i=0;i<e;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(visited[i]==false){
                bfs(i);
                dem++;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}