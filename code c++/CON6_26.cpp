#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[i]>v[j]) swap(v[i],v[j]);
            }
            cout<<"Buoc "<<i+1<<": ";
            for(int x:v) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}