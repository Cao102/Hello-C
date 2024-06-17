#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        int F[n+1][n+1];
        memset(F,0,sizeof(F));
        for(int i = 1; i <= n; i++) cin >> a[i], F[i][1] = a[i];
        for(int i = 1; i <= n; i++){
            int h = a[i];
            for(int j = i; j <= n; j++){
                h = min(h, a[j]);
                int s = h*(j-i+1);
                F[i][j] = max(s,max(F[i-1][j],F[i-1][j-1])); 
            }    
        }
        cout << F[n][n] << endl;
    }
    return 0;
}