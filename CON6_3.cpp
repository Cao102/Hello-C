#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+5];
        int ans=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            int k=i;
            for(int j=i+1;j<n;j++){
                if(a[k]>a[j]) k=j;
            }
            if(k!=i){
                swap(a[k],a[i]);
                ans++;
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}