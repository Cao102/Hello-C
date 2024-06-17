#include<bits/stdc++.h>

using namespace std;

int idx,sum,mx,mn,fact;
vector<int> v;

void nhap(){
    sum = 0;
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum = sum*10 + s[i]-'0';
            if(i == s.size() - 1)
                v[sum]+=fact;
        }
        else if(s[i] == '*'){
            fact = sum;
            sum = 0;
        }
        else if(s[i] == '+'){
            v[sum] +=  fact;
            mx = max(mx,sum);
            sum=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        v.clear();
        v.resize(10000,0);
        mx = 0;
        nhap(); nhap();
        for(int i = 0; i <= mx; i++)
            if(v[i]){
                mn = i;
                break; 
            }
        for(int i = mx; i > mn; i--){
            if(v[i])
                cout << v[i] << "*x^" << i << " + "; 
        }
        cout << v[mn] << "*x^" << mn <<endl;
    }
    return 0;
}