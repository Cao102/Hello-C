#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int check=0;
        for(int i=0;i<n/4;i++){
            if((n-(4*i))%7==0){
                check=1;
                for(int j=0;j<i;j++) cout<<"4";
                for(int j=0;j<(n-(4*i))/7;j++) cout<<"7";
                break;
            }
        }
        if(check==0) cout<<"-1";
        cout<<endl;
        }
    }