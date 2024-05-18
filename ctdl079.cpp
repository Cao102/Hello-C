#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long F[n+5];
        for(int i=0;i<=n;i++){
            F[i]=i;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sqrt(i);j++){
                F[i]=min(F[i],F[i-j*j]+1);
            }
        }
        cout<<F[n]<<" ";
    }
}