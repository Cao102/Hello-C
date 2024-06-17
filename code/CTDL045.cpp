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
        for(int i = 0; i < 28; i++) mx = max(mx,a[i]);
        if(mx*2 > s.size()+1) cout << "-1" << endl;
        else cout << "1" << endl;
    }
    return 0;
}