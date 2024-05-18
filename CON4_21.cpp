#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long power(long long n,long long k){
    if(k==0) return 1;
    long long p=power(n,k/2);
    p=(p*p)%mod;
    if(k&1) p=(p*n)%mod;
    return p;
}
int main(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        cout<<power(n,k)<<endl;
    }
    return 0;
}