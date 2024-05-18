#include<bits/stdc++.h>
using namespace std;
stack<int> st;
void solve(){
    string s;
    int x;
    cin>>s;
        if(s=="PUSH"){
            cin>>x;
            st.push(x);
        }
        if(s=="POP"){
            if(!st.empty()) st.pop();
        }
        if(s=="PRINT"){
            if(st.empty()) cout<<"NONE";
            else cout<<st.top();
            cout<<endl;
        }
    }
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}