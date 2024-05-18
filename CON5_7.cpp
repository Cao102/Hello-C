#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        long long F[n+5];
        memset(F,0,sizeof(F));
        F[0]=F[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                F[i]+=F[i-j];
            }
            F[i]%=mod;
        }
        cout<<F[n]<<endl;
    }
}