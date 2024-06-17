#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        stack<int> st1,st2;
        vector<int> a(n+1),g(n+1,-1),l(n+1,-1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++){
            while(st1.size() && a[i] > a[st1.top()]){
              g[st1.top()] = i;
              st1.pop();   
            }
            st1.push(i);
        }
        for(int i = 1; i <= n; i++){
            while(st2.size() && a[i] < a[st2.top()]){
              l[st2.top()] = i;
              st2.pop();   
            }
            st2.push(i);
        }
        for(int i = 1; i <= n; i++){
            if(g[i] == -1 || l[g[i]] == -1) cout << -1 << " ";
            else cout << a[l[g[i]]] << " ";
        }
        cout << endl;
    }
    return  0;
}