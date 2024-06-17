#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]==' ') continue;
            else if(stoi(s.substr(j,1))>i){
                v.push_back({i,stoi(s.substr(j,1))});
            }
        }
    }
    for(auto i:v) cout<<i.first<<" "<<i.second<<endl;
    return 0;
}