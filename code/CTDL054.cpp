#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> v;
int n;

void test(vector<pair<int,int>> v){
    double result = 1e9;
    for(int j = 0; j < n; j++){
        for(int i = j+1; i < n; i++){
            double x = v[i].first - v[j].first;
            double y = v[i].second - v[j].second;
            double d = sqrt(pow(x,2) + pow(y,2));
            if(d < result) result = d;
        }
    }
    cout << setprecision(6) <<fixed <<  result << " " << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n;
        for(int i = 1; i <= n; i++){
            int x, y; cin >> x >> y;
            v.push_back({x,y});
        }
        test(v);
    }
    return 0;
}