#include<bits/stdc++.h>

using namespace std;

int tinh(string s){
    int n = s.size();
    int f[n+1];
    memset(f,0,sizeof(f));
    if(s[0] == '0') return 0;
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i++){
        if(s[i-1] != '0') f[i] = f[i-1]; 
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7')){ 
            f[i] += f[i-2];
        }
    }
    return f[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << tinh(s) << endl;
    }
    return 0;
}