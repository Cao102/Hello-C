#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
bool cmp(int a, int b){
    return a < b;
}
int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    priority_queue<long long,vector<long long>,greater<long long>> pq;
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        pq.push(x);
    }
    long long sum = 0;
    while(pq.size() > 1){
        long long res = pq.top(); pq.pop();
        res += pq.top(); pq.pop();
        sum += res%mod;
        sum %= mod;
        pq.push(res); 
    }
    cout << sum << endl;
    }
    return 0;
}