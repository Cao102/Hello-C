#include<bits/stdc++.h>
using namespace std;
int k,id;
void solve(){
    cin>>k;
    string s; cin>>s;
    id=0;
    while(k!=0&&id!=s.size()){
        int j;
        char std=s[id];
        for(int i=id+1;i<s.size();i++){
            if(std<=s[i]){
                std=s[i];
                j=i;
            }
        }
        if(std!=s[id]){
            swap(s[j],s[id]);
            k--;
        }
        else id++;
    }
    cout<<s<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}