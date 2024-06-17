#include<bits/stdc++.h>
using namespace std;

int n , k, a[100] = {};
bool ok = 0;
vector<string> res;
bool check(vector<int> &a){
    int mark = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        if(a[i] == 1){
            for(int j = i; j < k + i && j < n; j++){
                if(a[i] == a[j]) cnt++;
            }
        }
        if(cnt == k) mark++;
    }
    if(mark == 1) return 1;
    return 0;
}
void outp(){
    vector<int> c;
    for(int i = 1; i <= n; i ++) c.push_back(a[i]);
    if(check(c)){
        string tmp = "";
        for(int j = 0; j < n; j ++){
            if(c[j] == 1) tmp = tmp + "A";
            else tmp = tmp + "B";
        }
        res.push_back(tmp);
    }
}
void next(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 1;
    else a[i] = 1;
}
int main(){
    cin >> n >> k;
    while(!ok){
        outp();
        next();
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}