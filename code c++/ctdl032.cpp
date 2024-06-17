#include<bits/stdc++.h>
using namespace std;
long long mod=1e9;
int main(){
    int t; cin>>t; // khai báo số lượng bộ test
    while(t--){
        int n,k; cin>>n>>k;
        int f[n+5];
        memset(f,0,sizeof(f));
        f[0]=f[1]=2; 
        for(int i=2;i<=n;i++){
            if(i<=k) f[i]=(f[i-1]*2)%mod; 
            else f[i]=(f[i-1]*2-f[i-k-1])%mod;
        }
        cout<<f[n]<<endl;
    }
}