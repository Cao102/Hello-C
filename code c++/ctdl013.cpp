#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void show(int k){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void quaylui(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) show(k);
        else quaylui(i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        quaylui(1);
        cout<<endl;
    }
}