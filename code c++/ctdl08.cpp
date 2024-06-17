#include<bits/stdc++.h>
using namespace std;
void gray(string s){
    int l=s.size();
    cout<<s[0];
    for(int i=0;i<l-1;i++){
        if(s[i]=='0'&&s[i+1]=='1'||s[i]=='1'&&s[i+1]=='0'){
            cout<<"1";
        }
        else cout<<"0";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        gray(s);
    }
}