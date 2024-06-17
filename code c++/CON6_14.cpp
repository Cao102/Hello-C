#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<bool> eratosthenes_sieve_with_bool(ll limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = true;
    for(ll i = 2; i * i <= limit; ++i)
        if(is_prime[i])
            for (ll j = i * i; j <= limit; j += i) is_prime[j] = false;
    return is_prime;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        bool kt=0;
        vector<bool> N=eratosthenes_sieve_with_bool(1000005);
        for(long long i=2;i<=n/2;i++){
            if(N[i]&&N[n-i]){
                        cout<<i<<" "<<n-i<<endl;
                        kt=1;
                        break;
            }
            }
        if(kt==0) cout<<"-1"<<endl;
    }
    return 0;
}