#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>,greater<int>> pq;
// xếp lại queue theo thứ tự tăng dần
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            pq.push(x);
        }
        int sum=0;
        while(pq.size()>1){
            int res=pq.top();
            pq.pop();
            res+=pq.top();
            pq.pop();
            sum+=res;
            pq.push(res);
        }
        cout<<sum<<endl;
        pq.pop();
    }
}