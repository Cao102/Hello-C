#include<bits/stdc++.h>
using namespace std;
int dem(long long K,long long N,long long center){
    if(K%2) return 1;
    if(K==center) return N%2;
    if(K>center) return dem(center*2-K,N/2,center/2);
    return dem(K,N/2,center/2);
}
int main(){
    int t; cin>>t;
    while(t--){
        long long N,L,R;
        cin>>N>>L>>R;
        long long center=pow(2,(long long)log2(N));
        long long sum=0;
        for(long long i=L;i<=R;i++){
            sum+= dem(i,N,center);
        }
        cout<<sum<<endl;
    }
}