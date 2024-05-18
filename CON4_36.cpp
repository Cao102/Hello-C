#include<bits/stdc++.h>
using namespace std;
long long doi2sang10(string s){
    long long sum=0;
    int k=0;
    for(int i=s.size()-1;i>=0;i--){
        sum+=(s[i]-'0')*pow(2,k++);
    }
    return sum;
}
int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        long long sum=doi2sang10(a)*doi2sang10(b);
        cout<<sum<<endl;
    }
    return 0;
}