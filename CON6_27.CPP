#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n),v;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            v.push_back(a[i]);
            sort(v.begin(),v.end());
            cout<<"Buoc "<<i<<": ";
            for(int x:v) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}