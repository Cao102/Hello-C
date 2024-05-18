#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
void dfs(int k){
    stack<int> st;
    st.push(k);
    
    while(!st.empty()){
        int u=st.top(); st.pop();
        if(visited[u])cout<<u<<" ";
            visited[u]=false;
            for(int x:adj[u]){
                if(visited[x]){
                    st.push(u);
                    st.push(x);
                    break;
                }
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        memset(visited,true,sizeof(visited));
        int e,v,k; cin>>e>>v>>k;
        for(int i=0;i<v;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(k);
        cout<<endl;
    }
    return 0;
}