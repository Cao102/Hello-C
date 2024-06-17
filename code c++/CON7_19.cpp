#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<int> st;
        int pos = 1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                if(i==0||s[i-1]=='I'){
                    st.push(pos++);
                }
                st.push(pos++);
            }
            else{
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                if(i==0) cout<<pos++;
                if(s[i+1]!='D') cout<<pos++;
            }
        }
        while(st.size()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}