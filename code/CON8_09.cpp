#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s, t;
        cin >> s >> t;
        map<int,int> mp;
        queue<pair<int,int>> q;
        q.push({s,0});
        while(q.size()){
            pair<int,int> p = q.front(); q.pop();
            if(p.first == t){
                cout << p.second << endl;
                break;
            }
            if(p.first <= t && !mp[p.first*2]){
                q.push({p.first*2, p.second+1});
                mp[p.first*2]++;
            }
            if(p.first > 1 && !mp[p.first -1]){
                q.push({p.first-1, p.second+1});
                mp[p.first]++;
            }
        }
    }
    return 0;
}