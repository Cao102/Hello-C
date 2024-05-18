#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n,vector<int>(m+1,0));
        int a[n+1], b[n+1];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >>b[i];
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= m; j++){
                if(i > 0){
                    if(a[i] <= j){
                        v[i][j]=max(v[i-1][j],v[i-1][j-a[i]]+b[i]);
                    }
                    else v[i][j]=v[i-1][j];
                }
                else if(a[i] <= j) v[i][j]=b[i];
            }
        }
        cout << v[n-1][m] << endl;
    }
    return 0;
}