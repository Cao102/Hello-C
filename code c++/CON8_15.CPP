#include<bits/stdc++.h>

using namespace std;
int dist[1005][1005];
int dichuyen(vector<vector<int>> a, int m, int n){
   memset(dist, 0, sizeof(dist));
    queue<pair<int, int>> q;
    q.push({0,0});
    while(q.size()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        if( x == m-1 && y == n-1) return dist[x][y]; 
        if(x + a[x][y] < m && dist[x + a[x][y]][y] == 0){
            dist[x + a[x][y]][y] = dist[x][y] + 1;
            q.push({x + a[x][y], y});
        }
        if(y + a[x][y] < n && dist[x ][y+ a[x][y]] == 0){
            dist[x][y + a[x][y]] = dist[x][y] + 1;
            q.push({x, y + a[x][y]});
        }
    }
    return -1;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int m, n;
        cin >> m >> n;
        vector<vector<int>> a(m, vector<int>(n)); 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cout << dichuyen(a, m, n) << endl;
    }
    return 0;
}