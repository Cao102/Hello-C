#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n ; i++) cin >> v[i].first;
    for(int i = 0; i < n; i++) cin >> v[i].second;
    int cnt = 1;
    int j = 0;
    sort(v.begin(), v.end(), cmp);
    for(int i = 1; i < n; i++){
        if(v[j].second <= v[i].first){
            cnt++;
            j = i;
        }
    }
    cout << cnt << endl;
    }
    return 0;
}