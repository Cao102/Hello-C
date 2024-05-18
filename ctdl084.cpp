#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, x; cin>>n>>x;
        x--;
        int  a[n+5];
        stack<int> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.push(a[i]);
        }
        int h=x;
        while(x>=0){
            cout<<st.top()<<" ";
            st.pop();
            x--;
        }
        for(int i=h;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}