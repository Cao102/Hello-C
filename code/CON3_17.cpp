#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k; string s;
        cin >> k >> s;
        priority_queue<int> pq;
        map<char,int> mp;
        int len = s.size();
        if(k >= len) cout << 0 << endl;
        else{
        for(int i = 0; i < len; i++) mp[s[i]]++;
        for(int i = 'A'; i <= 'Z'; i++){
            if(mp[i]) pq.push(mp[i]);
        }
        while(k--){
            int res = pq.top(); pq.pop();
            res--;
            pq.push(res);
        }
        long long sum = 0;
        while(pq.size()){
            int i = pq.top(); pq.pop();
            sum += pow(i, 2);
        }
        cout << sum << endl;
        }
    }
    return 0;
}