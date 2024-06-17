#include<bits/stdc++.h>
using namespace std;

bool check[10000];
void snt(){
    for(int i = 2; i*i <= 9999; i++){
        if(check[i]){
            for(int j = i*i; j <= 9999; j += i){
                check[j] = false;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(check, true, sizeof(check));
        snt();
        string s, k;
        cin >> s >> k;
        queue<pair<string,int>> q;
        map<string,int> mp;
        q.push({s,0});
        while(s.size()){
            pair<string, int> p = q.front(); q.pop();
            string tmp = p.first;
            if(tmp == k){
                cout << p.second << endl;
                break;
            }
            for(int i = 0; i < 4; i++){
                int pos = 0;
                if(i == 0) pos++;
                for(int j = pos; j <= 9; j++){
                    tmp[i] = j + '0';
                    if(check[stoi(tmp)] && !mp[tmp]){
                    mp[tmp]++;
                    q.push({tmp,p.second+1});
                    }
                    tmp = p.first;
                }
            }
        }
    }
    return 0;
}