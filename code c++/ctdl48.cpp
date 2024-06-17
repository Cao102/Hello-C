#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long a,b,m,t;
        cin>>a>>b;
        while(b%a!=0){
            t=a;
            m=b;
            long long x=b/a;
            cout<<1<<"/"<<x+1<<" + ";
            a=(x+1)*t-m;
            b=(x+1)*b;
        }
        cout<<1<<"/"<<b/a<<endl;
    }
}