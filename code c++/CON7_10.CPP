#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        string s,check;
        cin >> s >> check;
        int n = s.size();
        stack<char> st , res;
        for(int i = 0; i < n; i++){
            if(s[i] != ')') st.push(s[i]);
            else{
                while(st.size() && st.top() != '('){
                    res.push(st.top());
                    st.pop();
                }
                st.pop();
                if(st.size() && st.top() == '-'){
                    while(res.size()){
                        if(res.top() == '+') st.push('-');
                        else if(res.top() == '-') st.push('+');
                        else st.push(res.top()); 
                        res.pop();
                    }
                }
                else while(res.size()){
                    st.push(res.top());
                    res.pop();
                }
            }           
            }
        string ans="";
            while(st.size()){
                ans=st.top()+ans;
                st.pop();
        }
        if(ans == check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}