#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; int D;
        cin >> D >> s;
        map<char,int> mp;
        int mx = 0, len = s.size();
        for(int i = 0; i < len; i++){
            mp[s[i]]++;
            mx = max(mx,mp[s[i]]);
        }
        if(mx < len/(D - 1)) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}