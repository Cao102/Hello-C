#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];
void dfs(int k){
    stack<int> st;
    st.push(k);
    while(st.size()){
        int u= st.top();
        st.pop();
        visited[u]=true;
        for(int x: adj[u]){
            if(visited[x]==false){
                st.push(u);
                st.push(x);
                visited[x]=true;
                break;
            }
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int v,e; cin>>v>>e;
        int dem=0;
        memset(visited,false,sizeof(visited));
        for(int i=0;i<e;i++){
            int x,y; cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
           }
        for(int i=1;i<=v;i++){
            if(visited[i]==false){
                dfs(i);
                dem++;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}