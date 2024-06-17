#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(next_permutation(a+1,a+n+1)){ // next_permutation: hoán vị tiếp theo
            for(int i=1;i<=n;i++)cout<<a[i]<<" "; 
        }
        else{ 
            for(int i=1;i<=n;i++) cout<<i<<" ";
        }
        cout<<endl;
    }
}