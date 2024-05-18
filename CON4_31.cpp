#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 +7;
long long mt[10][10],mtp[10][10];
int n,k;
void mult_mt(long long x[10][10],long long y[10][10]){
    long long tmp[10][10];
    for(int i=1;i<=n;i++){   
        for(int j=1;j<=n;j++){
            long long res=0;
            for(int e=1;e<=n;e++){
                res+=(x[i][e]*y[e][j])%mod;
                res%=mod;
            }
            tmp[i][j]=res;
        }
    }
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            mt[i][j]=tmp[i][j];
            }
        }
}
void pow_mt(long long mt[10][10],int k){
    if(k<=1) return ;
    pow_mt(mt,k/2);
    mult_mt(mt,mt);
    if(k%2) mult_mt(mt,mtp);
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>mt[i][j];
                mtp[i][j]=mt[i][j];
            }
        }
        pow_mt(mt,k);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<mt[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}