#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int n,k; cin>>n>>k;
    int a[n+5];
    a[1]=1; a[2]=1;
    for(int i=3;i<=n;i++) a[i]=a[i-1]+a[i-2];
    while(1){
        if(n==1){
            cout<<"A"; break;
        }
        else if(n==2){
            cout<<"B"; break;
        }
        else if(k>a[n-2]){
            k-=a[n-2];
            n--;
        }
        else n-=2;
    }
    cout<<endl; 
    }
    
    return 0;
}