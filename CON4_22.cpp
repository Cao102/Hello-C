#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+5];
        int vt=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==k) vt=i;
        }
        if(vt) cout<<vt<<endl;
        else cout<<"NO"<<endl;
    }
}