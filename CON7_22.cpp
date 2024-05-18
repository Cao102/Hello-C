#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+5],dp[n+5][n+5];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            int mn=a[i];
            for(int j=i;j<=n;j++){
                mn=min(mn,a[j]);
                int s=mn*(j-i+1);
                dp[i][j]=max(s,max(dp[i-1][j-1],dp[i-1][j]));
            }
        }
        cout<<dp[n][n]<<endl;
    }
}