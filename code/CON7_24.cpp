#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int sum, mx, mn, idx, fact;
void nhap(){
    sum = 0;
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum = sum*10 + s[i] - '0';
            if(i == s.size() - 1) v[sum] += fact;
        }
        else if(s[i] == '*'){
            fact = sum;
            sum = 0;
        }
        else if(s[i] == '+'){
            v[sum] += fact;
            mx = max(mx,sum);
            sum = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        v.clear();
        v.resize(1000,0);
        mx = 0;
        nhap(); nhap();
        for(int i = 0; i < 1000; i++){
            if(v[i]){
                mn = i;
                break;
            }
        }
        for(int i = mx; i > mn; i--){
            if(v[i]) cout << v[i]  <<  "*x^" << i << "+ ";
        }
        cout << v[mn]  <<  "*x^" << mn << endl; 
    }
    return 0;
}