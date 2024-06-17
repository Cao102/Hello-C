#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool visited[1005];

void dfs(int k){
    stack<int> st;
    st.push(k);
    while(st.size()){
        int u = st.top(); st.pop();
        if(!visited[u]) cout << u << " ";
        visited[u] = true;
        for(int x: adj[u]){
            if(!visited[x]){
                st.push(u);
                st.push(x);
                break;
            }   
        }  
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        memset(visited,false,sizeof(visited));
        int v, e, k;
        cin >> v >> e >> k;
        for(int i = 0; i < e; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        dfs(k);
    }
    return 0;
}