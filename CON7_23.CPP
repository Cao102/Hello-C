#include<bits/stdc++.h>

using namespace std;

bool check(char c){
    return (c >= '0' && c <= '9');
}
int main() {
    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string temp = "";
        stack<string> st;
        stack<int> ints;
        for(char ch: s){
            if(check(ch)) ints.push(ch-'0');
            else if(ch == '['){
                st.push(temp);
                temp="";
            }
            else if(ch == ']'){
                int dem = ints.top();
                ints.pop();
                string phu=st.top();
                st.pop();
                for(int i = 1; i <= dem; i++){
                    phu += temp; 
                }
                temp=phu;
            }
            else{
                temp += ch;
            }
        }
        cout << temp << endl;
    }
    return 0;
}