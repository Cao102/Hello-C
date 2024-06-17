#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string st, ed;
        cin >> n >> st >> ed;
        queue<pair<string,int>> q;
        set<string> se;
        map<string,int> mp;
        q.push({st,0});
        mp[st]++;
        for(int i = 1; i <= n; i++){
            string s;
            cin >> s;
            se.insert(s);
        }
        while(q.size()){
            pair<string,int> p = q.front(); q.pop();
            string s = p.first;
            if(s == ed){
                cout << p.second + 1 << endl;
                break;
            }
            for(int i = 0; i < s.size(); i++){
                s = p.first;
                for(char c = 'A'; c <= 'Z'; c++){
                    s[i] = c;
                    if(se.find(s) != se.end() && !mp[s]){
                        mp[s]++;
                        q.push({s,p.second+1});
                    }
                }
            }
        }
    }
    return 0;
}