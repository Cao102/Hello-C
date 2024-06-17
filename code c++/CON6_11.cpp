#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        float a[n+5];
        float res;
        float mn=1e9;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                res=a[i]+a[j];
                if(abs(0-res)<abs(0-mn)) mn=res;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}