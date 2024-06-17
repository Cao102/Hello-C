#include<bits/stdc++.h>
using namespace std;
bool gre(int n, int k){
    return (n >= k);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        long long a = 0, b = 0, sum = 0;
        for(int i = 0; i < n; i++){
            if(i%2){
                a = a*10 + v[i];
            }
            else b = b*10 + v[i];
        }
        cout << a+b << endl;
    }
    return 0;
}