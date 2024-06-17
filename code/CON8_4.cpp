#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        vector<int> v(26,0);
        for(int i = 0; i < s.size(); i++){
            v[s[i] - 'A']++;
        }
        priority_queue<int> q;
        for(int i = 0; i < 26; i++){
            if(v[i]) q.push(v[i]);
        }
        for(int i = 1; i <= k; i++){
            int x = q.top() - 1; q.pop();
            q.push(x); 
        }
        int sum = 0;
        while(q.size()){
            int x = q.top(); q.pop();
            sum += pow(x, 2); 
        }
        cout << sum << endl;
    }
    return 0;
}