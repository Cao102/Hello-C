#include<bits/stdc++.h>
using namespace std;
int gt(int n){
    if(n<=1) return 1;
    return n*gt(n-1);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long a[n+5],b[n+5],checka[n+5]={},checkb[n+5]={};
        long long vta=0,vtb=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            checka[a[i]]++;
            int x=0;
            for(int j=1;j<a[i];j++) if(checka[j]==0) x++;      
            vta+=x*gt(n-i);
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
            checkb[b[i]]++;
            int y=0;
            for(int j=1;j<b[i];j++) if(checkb[j]==0) y++;
            vtb+=y*gt(n-i);
        }
        cout<<abs(vta-vtb)<<endl;
    }
}