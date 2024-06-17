#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        bool check = 1 ; 
        string s;
        getline(cin,s);
        stack<char> st;
        for(int i = 0; i < s.size() ; i++){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='('){
                st.push(s[i]);
            }
            if(s[i]==')'){
                if(st.top()=='('){
                    check=0;
                    break;
                }
                while(st.size()&&st.top()!='('){
                    st.pop();
                }
                st.pop();
            }
        }
        if(check) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}