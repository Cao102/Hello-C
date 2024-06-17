#include<bits/stdc++.h>
using namespace std;
long long depth(string s, int &index){
    if(s[index]=='l') return 0;
    else if(s[index]=='n'){
        index++;
        long long depth_right= depth(s,index);
        index++;
        long long depth_left= depth(s,index);
        return max(depth_left,depth_right)+1;
    }
    else return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int i=0;
        long long d=depth(s,i);
        cout<<d<<endl;
    }
}