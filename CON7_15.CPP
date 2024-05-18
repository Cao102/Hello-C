#include<bits/stdc++.h>

using namespace std;

bool check(char c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));   
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size() ; i++){
            if(check(s[i])) st.push(string(1,s[i]));
            else{
                string k1 = st.top();
                st.pop();
                string k2 = st.top();
                st.pop();
                string k='('+k2+s[i]+k1+')';
                st.push(k);                
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}