#include<bits/stdc++.h>

using namespace std;
int xausum(string s, int k){
    int n = s.size();
    vector<int> v(26, 0);
    for(char c: s){
        v[c - 'A'] ++;
    }
    priority_queue<int> pq;
    for(int i: v) if(i){pq.push(i);} 
    while(k--){
        int top = pq.top() - 1;
        pq.pop();
        pq.push(top);
    }
    int sum = 0;
    while(pq.size()){
        int top = pq.top(); pq.pop();
        sum += top*top;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        cout << xausum(s,k) << endl;
    }
    return 0;
}