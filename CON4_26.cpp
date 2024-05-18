#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int k;
        string a,b;
        cin>>k>>a>>b;
        while(a.size()>b.size()){ b="0"+b; } 
        while(a.size()<b.size()){ a="0"+a; } 
        string res="";
        int tmp=0;
        for(int i=a.size()-1;i>=0;i--){
            int number=int(a[i]-'0')+int(b[i]-'0')+ tmp;
            res=char(number%k+'0') +res;
            tmp=number/k;
        }
        if(tmp>0){
            res=char(tmp+'0') +res;
        }
        cout<<res<<endl;
    }
}