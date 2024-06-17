#include<bits/stdc++.h>
using namespace std;

int tinh(int a, int b, char c){
    if(c == '+') return a+b;
    if(c == '-') return a-b;
    if(c == '*') return a*b;
    if(c == '/'){
        if(b == 0) return 0;
        else{
            return a/b;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                st.push(tinh(a,b,s[i]));
            }
            else st.push(s[i] -'0'); 
        }
        cout << st.top() << endl;
    }
    return 0;
}