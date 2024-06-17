#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^' ){
                string a = st.top(); st.pop();
                a = s[i] + st.top() + a; st.pop();
                st.push(a);
            }
            else st.push(string(1,s[i]));
        }
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}