#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int S,T; cin>>S>>T;
        pair<int , int > u;
        u.first=S;
        u.second=0;
        map<int,int> mp;
        queue<pair<int , int >> q;
        q.push(u);
        while(q.size()){
            u=q.front(); q.pop();
            if(u.first==T){
                cout<<u.second<<endl;
                break;
            }
            if(u.first<=T&&!mp[u.first*2]){
                mp[u.first*2]++;
                q.push({u.first*2,u.second+1});
            }
            if(u.first>1&&!mp[u.first-1]){
                mp[u.first-1]++;
                q.push({u.first-1,u.second+1});
            }
        }
    }
    return 0;
}