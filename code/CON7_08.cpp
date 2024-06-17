#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        string s, k;
        cin >> s;
        stack<char> st, ld;
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
                        for(int i = 1; i < k.size(); i++) st.push(k[i]);
                        break;
                    }
                }
            }
            else st.push(s[i]);
        }
        string result = "";
        while(st.size()){
            result = st.top() + result;
            st.pop();
        }
        cout << result << endl;
    }
    return 0;
}