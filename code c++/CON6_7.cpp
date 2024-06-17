#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+5];
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>a[i],v[i]=a[i];
        sort(v.begin(),v.end());
        int s,e;
        for(int i=0;i<n;i++){
            if(a[i]!=v[i]){
                s=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=v[i]){
                e = i;
                break;
            }
        }
        cout<<s+1<<" "<<e+1<<endl;
    }
    return 0;
}