#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        bool check = 0;
        cin >> n >> m;
        int mt[n+5][m+5];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> mt[i][j];
            }
        }
        int visited[n+5][m+5];
        memset(visited,0,sizeof(visited));
        queue<pair<int,int>> q;
        q.push({1,1});
        while(q.size()){
            pair<int,int> p = q.front(); q.pop();
            int x = p.first, y = p.second;
            if(x == n && y == m){
                cout << visited[x][y] << endl;
                check = 1;
                break;
            } 
            if(x + mt[x][y] <= n && !visited[x + mt[x][y]][y]){
                visited[x + mt[x][y]][y] = visited[x][y] + 1;
                q.push({x + mt[x][y],y});
            }
            if(y + mt[x][y] <= m && !visited[x][y + mt[x][y]]){
                visited[x][y + mt[x][y]] = visited[x][y] + 1;
                q.push({x,y + mt[x][y]});
            }
        }
        if(!check) cout << -1 << endl;
    }
    return 0;
}