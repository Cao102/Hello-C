#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        vector<string> v;
        int j;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
              j=i;
                while(j<s.size()&&s[j]!=' '){
                    st.push(s[j]);
                    j++;
            }
                string tmp="";
                while(!st.empty()){
                    tmp+=st.top();
                    st.pop();
            }
                v.push_back(tmp);
                i=j-1; 
            } 
           
        }
        for(string i:v) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}