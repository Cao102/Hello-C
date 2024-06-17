#include<bits/stdc++.h>
using namespace std;

bool cmp(tuple<int,int,int> a,tuple<int,int,int> b){
    return get<2>(a) > get<2>(b);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int deadline = 0;
        vector<tuple<int,int,int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> get<0>(v[i]) >> get<1>(v[i]) >> get<2>(v[i]);
            deadline = max(get<1>(v[i]), deadline);
        }
        sort(v.begin(),v.end(),cmp);
        int cnt =0, total = 0;
        vector<bool> slot(deadline, false);
        for(auto job: v){
            for(int j = get<1>(job); j > 0; j--){
                if(!slot[j]){
                    cnt++;
                    slot[j] = true;
                    total += get<2>(job);
                    break;
                }
            }
        }
        cout << cnt << " " << total << endl;
    }
    return 0;
}