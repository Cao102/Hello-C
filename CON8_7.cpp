#include<bits/stdc++.h>
using namespace std;
string n,k;
bool Try(string s){
    return (s.size()==n.size()&&s<=n||s.size()<n.size());
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        stack<string> q;
        q.push("1");
        int dem=0;
        while(q.size()){
            string k=q.top(); q.pop();
            dem++;
            if(Try(k+"0")) q.push(k+"0");
            if(Try(k+"1")) q.push(k+"1");
        }
        cout<<dem<<endl;
    }
}