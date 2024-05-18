#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int N,K; cin>>N>>K;//3 7
        int A[N];
        for(int i=0;i<N;i++) cin>>A[i];//1 5 6
        long long f[K+1]={},mod=1e9+7; // f số cách biểu diễn 
        f[0]=1;
        for(int i=1;i<=K;i++){
            for(int j=0;j<N;j++){
                if(i>=A[j]){
                    f[i]=(f[i]+f[i-A[j]])%mod;
                    //f[1]=1
                    //f[2]=1
                    //f[3]=1
                    //f[4]=1
                    //f[5]=1+1=2
                    //f[6]=2+1+1=4
                    //f[7]=4+1+1=6
                }
            }
        }
        cout<<f[K]<<endl;
    }
}