#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+5],b[k+5],dt[n+k+5];
        memset(dt,0,sizeof(dt));
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<k;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                dt[i+j]+=a[i]*b[j];
            }
        }
        for(int i=0;i<n+k-1;i++){
            cout<<dt[i]<<" ";
        }
        cout<<endl;
    }
}