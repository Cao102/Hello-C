#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long f[2][2],m[2][2];
void mul(long long F[2][2],long long M[2][2]){
    long long x=(F[0][0]*M[0][0]%mod+F[0][1]*M[1][0]%mod)%mod;
    long long y=(F[0][0]*M[0][1]%mod+F[0][1]*M[1][1]%mod)%mod;
    long long z=(F[1][0]*M[0][0]%mod+F[1][1]*M[1][0]%mod)%mod;
    long long k=(F[1][0]*M[0][1]%mod+F[1][1]*M[1][1]%mod)%mod;
    f[0][0]=x;
    f[0][1]=y;
    f[1][0]=z;
    f[1][1]=k;
}
void pow(long long F[2][2],long long n){
    if(n<=1) return;
    pow(F,n/2);
    mul(F,F);
    if(n&1) mul(F,m);
}
long long fi(long long n){
    f[0][0]=f[0][1]=f[1][0]=m[0][0]=m[0][1]=m[1][0]=1;
    f[1][1]=m[1][1]=0;
    pow(f,n-1);
    return f[0][0];
}
int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        cout<<fi(n)<<endl;
    }
}