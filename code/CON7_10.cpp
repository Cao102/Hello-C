#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        string s, b, k;
        cin >> s >> b;
        stack<char> st, ld;
        bool check = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                ld.push(s[i-1]);
            }
            else if(s[i] == ')'){
                k = "";
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
                        for(int j = 1; j < k.size(); j++) st.push(k[j]);
                        break;
                    }
                }
                ld.pop();
            }
            else st.push(s[i]);
        }
        string result = "";
        while(st.size()){
            result = st.top() + result;
            st.pop();
        }
        for(int i = 0; i < b.size(); i++){
            if(b[i] != result[i]){
                check = 0;
                break;
            } 
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}