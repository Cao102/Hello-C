#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++){
            a[i]=pow(2,i-1);
        }
        for(int i=n;i>=0;i--){
            if(a[i]==k){
                cout<<i<<endl;
                break;
            }
            else if(k>a[i]){
                k-=a[i];
            }
        }
    }
    return 0;
}