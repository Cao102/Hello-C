#include<bits/stdc++.h>

using namespace std;

int tiento(string &s, bool &check){
    stack<int> st;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            switch(s[i]){
                case '+': 
                    st.push(a+b);
                    break;
                case '-': 
                    st.push(a-b);
                    break;
                case '*': 
                    st.push(a*b);
                    break;
                case '/':
                    if(b == 0){
                        check = 1;
                        return 0; 
                    }                       
                    else{
                        st.push(a/b);
                        break;
                    } 
            }
        }
    }
    int result = st.top(); st.pop();
    return result;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        bool check = 0;
        int kq = tiento(s,check);
        if(check){
            cout << "0" << endl;
        }
        else cout << kq << endl; 
    }
}