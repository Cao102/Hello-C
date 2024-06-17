#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<char> st;
        vector<string> v;
        for(int i = 0; i < s.size(); i++){
            int j;
            if(s[i] != ' '){
                j = i;
                while(s[j] != ' ' && j < s.size()){
                    st.push(s[j]);
                    j++;
                }
                string tmp = "";
                while(st.size()){
                    tmp += st.top();
                    st.pop();
                }
                v.push_back(tmp);
                i = j-1;
            }
        }
        for(string i: v) cout << i << " ";
        cout << endl;
    }
    return 0;
}