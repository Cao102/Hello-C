#include<bits/stdc++.h>

using namespace std;

int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
int mt[505][505];
int res;

void gieocay(int n, int m){
    queue<pair<pair<int, int>,int>> q;
    for(int i = 1 ;i <= n; i++)
        for(int j = 1; j <= m; j++){
            cin >> mt[i][j];
            if(mt[i][j] == 2){
                q.push({{i, j}, 0});
            }
        }
    while(q.size()){
        pair<int, int> p = q.front().first;
        int cnt = q.front().second;
        q.pop();   
        res = max(res, cnt);    
        for(int i = 0; i < 4; i++){
            int x = p.first, y = p.second;
            x = x + dx[i], y = y + dy[i];
            if(x*y > 0 && mt[x][y] == 1){q.push({{x,y}, cnt+ 1}); mt[x][y] = 2;} 
        }
    }
    for(int i = 1 ;i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(mt[i][j] == 1) {cout << -1 << endl; return;} 
    cout << res << endl;        
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        gieocay(n,m);
    }
    return 0;
}