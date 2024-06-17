#include<bits/stdc++.h>
using namespace std;

vector<string> pow_3(long long n){
    vector<string> v;
    for(int i = 1; i <= 100; i++){
        v.push_back(to_string((long long) i*i*i));
    }
    return v;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        bool check = 0;
        vector<string> v = pow_3(n);
        string s = to_string(n);
        for(int i = 99; i >= 0; i--){
            string x = v[i];
            int l = x.size();
            int idex = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == x[idex]){
                    idex++;
                }
            }
            if(idex == l){
                check = 1;
                cout << x << endl;
                break;
            } 
        }
        if(!check) cout << -1 << endl;
    }
    return 0;
}