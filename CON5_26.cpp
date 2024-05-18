#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t; cin>>t;
    while(t--){
        int C,N; cin>>C>>N;
        int a[N+5];
        for(int i=1;i<=N;i++) cin>>a[i];
        long long dp[N+5][C+5];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=N;i++){
            for(int j=1;j<=C;j++){
                if(a[i]<=j){
                    dp[i][j]=max(dp[i-1][j-a[i]]+a[i],dp[i-1][j]);
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        cout<<dp[N][C]<<endl;
    }
}