#include<bits/stdc++.h>
using namespace std;
string s;

bool cmp(string k){
    return (s.size() == k.size() && k <= s || k.size() < s.size());
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        queue<string> q;
        q.push("1");
        int dem = 0;
        while(q.size()){
            string k = q.front(); q.pop();
            dem++;
            if(cmp(k+"0")) q.push(k+"0");
            if(cmp(k+"1")) q.push(k+"1");
        }
        cout << dem << endl;
    }
    return 0;
}