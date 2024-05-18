#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1005];

int main(){
    int t;
    cin >> t;
    while(t--){
        int e, v;
        cin >> e >> v;
        for(int i = 0; i < v; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int s = 0;
        for(int i = 1; i <= e; i++){
            if(adj[i].size() % 2 == 0) s++;
        }
        if(s == e) cout << 2;
        else if(s == e-2) cout << 1;
        else cout << 0;
        cout << endl;
        for(int i = 1; i <= e; i++) adj[i].clear();
    }
    return 0;
}