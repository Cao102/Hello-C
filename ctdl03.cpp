#include<bits/stdc++.h>
using namespace std;
string s;
int main(){ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
      
        cin>>s;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                 s[i]='0';
            }
            else{
                s[i]='1';
                break;
            }
        }
        cout<<s<<endl;
    }
}