#include<bits/stdc++.h>
using namespace std;

long long mod = 123456789;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 0; i <= n; i++) a[i] = 1;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++){
                a[i] += a[i-j]%mod;
                a[i] %= mod;
            }
        }
        cout << a[n] << endl;
    }
    return 0;
}