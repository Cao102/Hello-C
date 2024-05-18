#include<bits/stdc++.h>
using namespace std;
int doimin(int n){
    string a=to_string(n);
    for(int i=0;i<a.size();i++){
        if(a[i]=='5') a[i]='3';
    }
    int b=stoi(a);
    return b;
}
int doimax(int n){
    string a=to_string(n);
    for(int i=0;i<a.size();i++){
        if(a[i]=='3') a[i]='5';
    }
    int b=stoi(a);
    return b;
}
int main(){
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<doimin(a)+doimin(b)<<" "<<doimax(a)+doimax(b)<<endl;
    }
}