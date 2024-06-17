#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++){
            cout << "D" << i << ": ";
            for(int x: adj[i]) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}