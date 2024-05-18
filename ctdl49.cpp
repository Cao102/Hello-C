#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+100];
        int check =0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==k) check=i;
        }
        if(check==0) cout<<"NO"<<endl;
        else cout<<check<<endl;
    }
}