#include<bits/stdc++.h>

using namespace std;

bool check[10000];
void snt(){
    for(int i = 2; i*i <= 9999; i++){
        if(check[i]){
            for(int j = i*i; j <= 9999; j += i){
                check[j] = 0;
            }
        }
    }
}
int main(){
    memset(check, 1, sizeof(check));
    snt();
    int t;
    cin >>t;
    while(t--){
        string st, ed, s;
        cin >> st >> ed;
        pair<string, int> u;
        queue<pair<string, int>> q;
        map<string, int> m;
        q.push({st, 0});
        while(q.size()){
            u = q.front();
            q.pop();
            s = u.first;
            if(s == ed){
                cout << u.second << endl;
                break;
            }
            for(int i = 0; i < 4; i++){
                int pos = 0;
                if(i == 0) pos++;
                for(int j = pos; j <= 9; j++){
                    s[i] =  j + '0';
                    if(!m[s] && check[stoi(s)]){
                        m[s]++;
                        q.push({s, u.second + 1});
                    }
                    s = u.first;
                }
            }
        }
    }
    return 0;
}