#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long F[n+10];
        memset(F,0,sizeof(F));
        F[1]=1,F[2]=2,F[3]=4;
        for(int i=4;i<=n;i++){
            for(int j=1;j<=3;j++){
                F[i]+=F[i-j];
            }
        }
        cout<<F[n]<<endl;
    }
}