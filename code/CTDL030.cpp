#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int id = 0;
        while(n != 0 && id != s.size()){
            char c = s[id];
            int add;
            for(int i = id + 1; i < s.size(); i++){
                if(c <= s[i]){
                    c = s[i];
                    add = i;
                }
            }
            if(c != s[id]){
                swap(s[id], s[add]);
                n--;
            }
            else id++;
        }
        cout << s << endl;
    }
    return 0;
}