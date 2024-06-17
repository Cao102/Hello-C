#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    while(t--){
       vector<pair<int, int>> v;
       int n;
       cin >> n;
       vector<int> l(n + 1, 1);
       for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
       }
        sort(v.begin(), v.end(), cmp);
        int ans = 1;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(v[j].second < v[i].first) l[i] = max(l[i], l[j] + 1);
            }
            ans = max(ans, l[i]);
        }
            
        cout << ans << endl;
    }
    return 0;
}