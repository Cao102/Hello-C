#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long dp[1005][1005];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    
        for(long long i=0;i<=1000;i++){
            for(long long j=0;j<=i;j++){
                if(j==0||i==j) dp[i][j]=1;
                else dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
                dp[i][j]%=mod;
            }
        }
    while(t--){
        long long n,k; cin>>n>>k;
        cout<<dp[n][k]<<endl;
    }
}