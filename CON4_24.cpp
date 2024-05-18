

#include<bits/stdc++.h>
using namespace std;
#define mod 123456789
long long power(long long a,long long n){
    if(n==0) return 1;
    long long p=power(a,n/2);
    p=(p*p)%mod;
    if(n%2) p=(p*a)%mod;
    return p;
}
int main(){
    int t; cin>>t;
    while(t--){
        long long k; cin>>k;
        cout<<power(2,k-1)<<endl;
    }
}