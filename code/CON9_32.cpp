#include<bits/stdc++.h>
using namespace std;
int mt[505][505];
bool visited[505][505];
int dx[]={1, 1, 1, 0, 0, -1, -1, -1};
int dy[]={1, 0, -1, 1, -1, 1, 0, -1};
int n, m;
void dfs(int x, int y){
    visited[x][y] = true;
    
    for(int j = 0; j < 8; j++){
        int a = x + dx[j], b = y + dy[j];
        if(a*b > 0 && a <= n && b <= m && visited[a][b] == false && mt[a][b]){
            dfs(a,b);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> mt[i][j];
            }
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++){
                if(visited[i][j] == false && mt[i][j]){
                    dfs(i,j);
                    visited[i][j] = true;
                    cnt++;
                }
            }
        cout << cnt << endl;
    }
    return 0;
}