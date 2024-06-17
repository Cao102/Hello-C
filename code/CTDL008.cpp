#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string k = "";
        k += s[0];
        for(int i = 1; i < s.size(); i++){
            if(s[i] != s[i-1]) k += "1";
            else  k += "0";
        }
        cout << k << endl;
    }
    return 0;
}