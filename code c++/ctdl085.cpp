#include<bits/stdc++.h>
using namespace std;
string n,k;
bool check(string s){
    return (s.size()==n.size()&& s <= n||s.size()<n.size());
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        stack<string> st;
        st.push("1");
        int dem=0;
        while(st.size()){
            k=st.top();
            st.pop();
            dem++;
            if(check(k+"0")) st.push(k+"0");
            if(check(k+"1")) st.push(k+"1");
        }
        cout<<dem<<endl;
    } 
}