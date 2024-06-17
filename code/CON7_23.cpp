#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; string tmp = "";
        cin >> s;
        stack<int> ints;
        stack<string> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9') ints.push(s[i] - '0');
            else if(s[i] == '['){
                st.push(tmp);
                tmp = "";
            }
            else if(s[i] == ']'){
                int k = ints.top(); ints.pop();
                string d = st.top(); st.pop();
                for(int i = 1; i <= k; i++){
                    d += tmp;
                }
                tmp = d;
            }
            else{ 
                tmp += s[i];
            }
        } 
        cout << tmp << endl;
    }
    return 0;
}