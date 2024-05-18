#include<bits/stdc++.h>
using namespace std;
int a[]={1,2,5,10,20,50,100,200,500,1000};
void solve(int n){
    int res=0;
    for(int i=9;i>=0;i--){
         res+=n/a[i];
         n=n%a[i];
    }
    cout<<res<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solve(n);
    }
}