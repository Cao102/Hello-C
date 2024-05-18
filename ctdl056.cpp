#include<bits/stdc++.h>
using namespace std;
long long c2sang10(string s){
    long long k=1,sum=0;
    for(int i=s.size()-1;i>=0;i--){
        sum+=(s[i]-'0')*k;
        k*=2;
    }
    return sum;
}
int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        long long x=c2sang10(a),y=c2sang10(b);
        cout<<x*y<<endl;
    }
}