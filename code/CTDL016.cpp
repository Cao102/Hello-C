#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9 + 7;
long long mt[10][10], tmp[10][10];
int n, k;

void mul(long long A[10][10], long long B[10][10]){
    long long mtp[10][10];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            long long res = 0;
            for(int e = 1; e <= n; e++){
                res += (A[i][e] % mod)*(B[e][j] %mod);
                res %= mod;
            }
            mtp[i][j] = res;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            mt[i][j] = mtp[i][j];
    }
}
void pow_mt(long long mt[10][10], int k){
    if(k <= 1) return;
    pow_mt(mt, k/2);
    mul(mt, mt);
    if(k%2) mul(mt, tmp);

}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++){
                cin >> mt[i][j];
                tmp[i][j] = mt[i][j];
            }
        pow_mt(mt,k);
        long long sum = 0;
        for(int i = 1; i <= n; i++){
            sum += mt[i][i]%mod;
            sum %= mod;
        }
        cout << sum << endl;
    }
    return 0;
}