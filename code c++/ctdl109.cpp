#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool check[1005];
int truoc[1005];
void dfs(int u){
    check[u]=1;
    for(int x:adj[u]){
        if(!check[x]){
            check[x]=1;
            truoc[x]=u;
            dfs(x);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,u,v; cin>>n>>m>>u>>v;
        for(int i=1;i<=m;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
        }
        stack<int> st;
        memset(check,0,sizeof(check));
        dfs(1);
        st.push(v);
        while(truoc[st.top()]!=u){
            st.push(truoc[st.top()]);
        }
        st.push(u);
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
}