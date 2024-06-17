#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n, s, m; cin >> n >> s >> m;
        if(n*6 < m*7 && s > 6 || m > n) cout << -1 << endl;
        else{
            int ans = (m*s)/n;
            if((m*s)%n != 0)
                ans++;
            cout << ans << endl;
        }
    }
    return 0;
}