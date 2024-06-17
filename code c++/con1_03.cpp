#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        
        cin >> s;
        string k = s;
        for(int i = 1; i <= s.size() ; i++){
            if(s[i] != k[i-1]) k[i] = '1';
            else k[i] = '0';
        }
        cout << k << endl;
    }
    return 0;
}