#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        long long sum=0,n=s.size(),k=1,m;
        for(int i=s.size()-1;i>=0;i--){
            m=(long long)(s[i]-'0')*k;
            m*=n;
            sum+=m;
            k=k*10+1;
            n--;
        }
        cout<<sum<<endl;
    }
}