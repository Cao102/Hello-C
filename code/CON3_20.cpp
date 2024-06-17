#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        int res = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ']'){
                if(st.empty()){
                    int idex = i;
                    while(s[idex] == ']') idex++;
                    swap(s[i],s[idex]);
                    st.push(i);
                    res += idex -i;
                }
                else st.pop();
            }
            else st.push(i);
        }
        cout << res << endl;
    }
    return 0;
}