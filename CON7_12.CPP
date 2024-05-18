#include<bits/stdc++.h>

using namespace std;

string dau="+-*/";
bool check(char s){
    for(int i = 0; i < 4; i++)
        if(s == dau[i]) return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(int i = s.size() - 1; i >= 0; i--){
            if( check(s[i]) ){
                string k = "";
                k='(' + st.top();
                st.pop();
                k= k + s[i] + st.top() + ')';
                st.pop();
                st.push(k);
            }
            else st.push(string(1, s[i]));
        }
        string ans = "";
        while(st.size()){
            ans=ans+st.top();
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}