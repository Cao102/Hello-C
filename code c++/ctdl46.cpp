#include<bits/stdc++.h>
using namespace std;
int n,s,m;
void slove(){
    cin>>n>>s>>m;
    if(s*m>(s-(s/7))*n) cout<<"-1"<<endl;
    else{
       for(int i=1;i<=s;i++){
        if(n*i>=s*m){
           cout<<i<<endl;
            break; 
        }
        } 
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        slove();
    }
}