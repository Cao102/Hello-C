#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];

void dfs(int x){
    stack<int> st;
    st.push(x);
    visited[x] = true;
    while(st.size()){
        int u = st.top(); st.pop();
        for(int v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited,false,sizeof(visited));
        int V, E;
        cin >> V >> E;
        for(int i = 0; i < E; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int result = 0;
        for(int i = 1; i <= V; i++){
            if(visited[i] == false){
                result++;
              dfs(i);  
            } 
        }
        cout << result << endl;
    }
    return 0;
}