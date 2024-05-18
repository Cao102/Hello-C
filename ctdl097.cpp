#include<bits/stdc++.h>
using namespace std;
string s;
stack<string> st;
void slove(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^'){
             string a=st.top(); st.pop();
             string b=st.top(); st.pop();
             string tmp=s[i]+b+a;
             st.push(tmp);
        }
        else st.push(string(1,s[i]));
        }
        cout<<st.top()<<endl;
        st.pop();
}
int main(){
    int t; cin>>t;
    while(t--){
        slove();
    }
}