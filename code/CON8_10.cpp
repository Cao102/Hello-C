#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        queue<pair<int,int>> q;
        q.push({n,0});
        while(q.size()){
            pair<int,int> p = q.front(); q.pop();
            if(p.first == 2){
                cout  << p.second + 1 <<  endl;
                break;
            }
            for(int i = 2; i <= sqrt(p.first); i++){
                if(p.first%i == 0 && !mp[p.first/i]){
                    mp[p.first/i]++;
                    q.push({p.first/i, p.second+1});
                }
            }
            q.push({p.first-1,p.second + 1});
            mp[p.first-1]++;
        }
    }
    return 0;
}