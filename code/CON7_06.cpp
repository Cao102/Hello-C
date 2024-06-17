#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        stack<char> st;
        bool check = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' ||s[i] == '/' ||s[i] == '(' ){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(st.top() == '('){
                    check = 0;
                    break;
                }
                    while(st.top() != '(' && st.size()){
                        st.pop();
                    }
                    st.pop();
            }
        }
        if(check) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}