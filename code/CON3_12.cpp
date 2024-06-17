#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int a[27] = {};
        for(int i = 0; i < s.size(); i++){
            a[s[i]-'a']++;
        }
        int mx = 0;
        for(int i = 0; i <= 27; i++) mx = max(mx,a[i]);
        if(2*mx > s.size() + 1) cout << -1 << endl;
        else cout << 1 << endl;
    }
    return 0;
}