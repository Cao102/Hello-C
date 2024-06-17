#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int n,k;
long long mt[10][10],mtp[10][10];
void mul_mt(long long x[10][10],long long y[10][10]){
    long long tmp[10][10];
    for(int i=1;i<=n;i++){//i la hang 
        for(int j=1;j<=n;j++){//j la cot
            long long res=0;
            for(int e=1;e<=n;e++){ // chay phan tu trong hang va cot
                res+=(x[i][e]*y[e][j])%mod;
                res %=mod;
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
    if(k<=1) return;
    pow_mt(mt,k/2);
    mul_mt(mt,mt);
    if(k%2==1) mul_mt(mt,mtp);
}
void slove(){
    cin>>n>>k;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mt[i][j];
            mtp[i][j]=mt[i][j];
        }
    }
    pow_mt(mt,k);
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=mt[i][i]%mod;
        sum %=mod;  
    }
    cout<<sum<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        slove();
    }
}