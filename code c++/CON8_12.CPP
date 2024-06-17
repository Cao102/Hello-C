#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string st, ed;
        cin >> n;
        cin >> st >> ed;

        set<string> se;
        queue<string> q;
        map<string, int> m;

        q.push(st);
        
        for(int i = 0 ;i < n; i++){
            string s;
            cin >> s;
            se.insert(s);
            m[s] = 0;
        }
        m[st] = 1;
        while(q.size()){
            string a = q.front(); q.pop();
            if(a == ed){
                cout << m[ed] << endl;
                break;
            } 
            for(int i = 0; i < a.size(); i++){
                string b = a;
                for(char c = 'A'; c <= 'Z'; c++){        
                    b[i] = c;
                    if(se.find(b) != se.end() && m[b] == 0){
                        m[b] = m[a] + 1;
                        q.push(b);
                    }
                }
            }
        }
    }
    return 0;
}