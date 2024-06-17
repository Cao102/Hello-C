#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
void solve(int n){
    int i=0;
    while(n>0){
        a[i++]=n%2;
        n/=2;
    }
    b[i-1]=a[i-1];
    for(int j=i-2;j>=0;j--){
        if(a[j]==a[j+1]) b[j]=0;
        else b[j]=1;
    }
    int sum=0;
    for(int j=0;j<i;j++){
        sum+=b[j]*pow(2,j);
    }
    cout<<sum<<endl;
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        solve(n);
    }
    
}