#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int N,K,S;
        cin>>N>>K>>S;
        int a[N+5];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int dp[K+1][S+1]={};
        dp[0][0]=1;
        for(int i=0;i<N;i++){
            for(int j=S;j>=a[i];j--){
                for(int h=1;h<=K;h++){
                    dp[h][j]+=dp[h-1][j-a[i]];
                }
            }
        }
        cout<<dp[K][S]<<endl;
    }
}