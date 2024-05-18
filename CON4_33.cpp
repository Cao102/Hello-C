#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long power(long long a,long long k){
    if(k==0) return 1;
    long long p=power(a,k/2);
    p=(p*p)%mod;
    if(k&1) p=(p*a)%mod;
    return p;
}
int main(){
    int t; cin>>t;
    while(t--){
        string n,k; cin>>n,k=n;
        reverse(k.begin(),k.end());
        long long A,B;
        A=stoll(n); B=stoll(k);
        cout<<power(A,B)<<endl;
    }
    return 0;
}