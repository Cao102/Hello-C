#include<bits/stdc++.h>
using namespace std;
int tim(int a[],int n,int k){
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==k) return 1;
        else if(a[m]>k) r=m-1;
        else l=m+1;
    }
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<tim(a,n,k)<<endl;
    }
    return 0;
}