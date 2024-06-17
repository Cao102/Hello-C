#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        long long f[n+5];
        memset(f,0,sizeof(f));
        f[0] = f[1] = 2;
        for(int i = 2; i <= n; i++){
            if(i <= k) f[i] = (f[i-1]*2)%mod;
            else{
                f[i] = (f[i-1]*2 - f[i - 1 - k])%mod;
            }
        }
        cout << f[n] << endl;
    }
    return 0;
}