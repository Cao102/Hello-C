#include<bits/stdc++.h>
using namespace std;

int add[1005];
string s;

void sinh(string s, int k, int n){
    if(k == n){
        cout << s << endl;
    }
    else for(int j = 0; j <= 1; j++){
        s[add[k]] = j + '0';
        sinh(s,k+1,n);
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n = 0;
        getline(cin,s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                add[n] = i;
                n++;                
            }
        }
        sinh(s,0,n);
    }
    return 0;
}