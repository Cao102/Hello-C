#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a < b;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        long long sum = 0 ;
        while(pq.size() > 1){           
            long long res = pq.top(); pq.pop();
            res += pq.top(); pq.pop();
            sum += res;
            pq.push(res);
        }
        cout << sum << endl;
        pq.pop();
    }
    return 0;
}