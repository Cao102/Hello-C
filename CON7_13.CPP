#include<bits/stdc++.h>

using namespace std;

string dau="+-*/";
bool check(char c){
    for(int i = 0; i < 4; i++){
        if(c == dau[i]) return 1;
    }
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
            if(check(s[i])){
                string k1=st.top();
                st.pop();
                string k2=st.top();
                st.pop();
                st.push(k1+k2+s[i]);
            }
            else st.push(string(1,s[i]));
        }
        cout << st.top() << endl;
    }
    return 0;
}