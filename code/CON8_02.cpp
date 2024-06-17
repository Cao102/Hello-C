#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    while(n--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        if(s == "POP"){
            if(q.size()) q.pop();
        }
        if(s == "PRINTFRONT"){
            if(q.size()) cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
    }
    return 0;
}