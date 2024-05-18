#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    vector<int> v;
    string s;
    while(cin>>s){
        if(s=="push"){
            cin>>x; v.push_back(x);
        }
        if(s=="pop"){
            if(!v.empty()) v.pop_back();
        }
        if(s=="show"){
            if(v.empty()) cout<<"empty";
            else{
                for(int i:v) cout<<i<<" ";
            }
            cout<<endl;
        } 
    }
}
int main(){
    int t; t=1;
    while(t--){
        solve();
    }
}