#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k,dem=0; cin>>k;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) dem++;
        }
        if(dem) cout<<dem<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}