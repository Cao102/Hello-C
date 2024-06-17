#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int main(){
    int t;
    cin >> t;
    while(t--){
        int V, E;
        cin >> V >> E;
        for(int i = 0; i < E; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int s = 0;
        for(int i = 1; i <= V; i++){
            if(adj[i].size()%2 == 0) s++;
        }
        if(s == V) cout << 2;
        else if(s == V-2) cout << 1;
        else cout << 0;
        for(int i = 1; i <= V; i++) adj[i].clear();
        cout << endl;
    }
    return 0;
}