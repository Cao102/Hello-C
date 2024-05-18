#include<bits/stdc++.h>

using namespace std;

int dx[] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[] = {1,-1, 0, 1, -1, 0, 1, -1}; 
int mt[505][505];
bool visited[505][505];
int m, n;
void dfs(int x, int y){
    visited[x][y] = 0;
    for(int i = 0; i < 8; i++){
        int a = x, b = y;
        a += dx[i]; b += dy[i];
        if(a*b > 0 && a <= m && b <= n && mt[a][b] &&visited[a][b]) dfs(a,b);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited, 1, sizeof(visited));
        cin >> m >> n;       
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cin >> mt[i][j];
            }
        }
        int cnt = 0;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(mt[i][j] && visited[i][j]){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}