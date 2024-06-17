#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<pair<char,int>> st;
        vector<int> F(s.size(),0);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')' && st.size() && st.top().first == '('){
                F[i] = F[i-1];
                if(st.top().second != 0){
                    F[i] += F[st.top().second - 1];
                }
                F[i] += 2;
                st.pop();
            }
            else st.push({s[i],i});
        }
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            ans = max(ans, F[i]);
        }
        cout << ans <<endl;
    }
}