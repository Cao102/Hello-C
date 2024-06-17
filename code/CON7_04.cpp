#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        bool check = true;
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            else if(s[i]=='}'){
                if(st.empty()) check=false;
                else if(st.top()=='{') st.pop();
            }
            else if(s[i]==']'){
                if(st.empty()) check=false;
                else if(st.top()=='[') st.pop();
            }
            else if(s[i]==')'){
                if(st.empty()) check=false;
                else if(st.top()=='(') st.pop();
            }
        }
        if(st.size()) check = false;
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}