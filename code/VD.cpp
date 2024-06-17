#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> st, ld;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                ld.push(s[i-1]);
            }
            else if(s[i] == ')'){
                string k = "";
                while(st.size()){
                    char c = st.top(); st.pop();
                    char d = st.top(); st.pop();
                    k = c + k;
                    if(ld.top() == '-'){
                        if(d == '+') k = '-' + k;
                        else k = '+' + k;
                    }
                    else k = d + k;
                    if(d == '('){
                        for(int i = 1; i < k.size(); i++) st.push(k[i]);
                        break; 
                    }
                }
                ld.pop();
            }
            else st.push(s[i]);
        }
        string ans = "";
        while(st.size()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}