#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int N; cin>>N;
        int A[N],B[N-1];
        for(int i=1;i<=N;i++) cin>>A[i];
        for(int i=1;i<=N-1;i++) cin>>B[i];
        for(int i=1;i<=N;i++){
                if(A[i]!=B[i]){
                    cout<<i<<endl;
                    break;
            }
    }
}
}