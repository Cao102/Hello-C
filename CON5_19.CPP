#include <bits/stdc++.h>

using namespace std;

long long f[10005];
long long slove(int x, int y, int z, int n){
    if(n == 1) return x;
    f[1] = x;
    for(int i  = 2; i <= n; i++){
        if(i % 2 == 0){
            f[i] = min(f[i - 1] + x, f[i / 2] + z);
        }
        else {
            f[i] = min(f[i - 1] + x, f[(i + 1) / 2] + y + z);
        }
    }
    return f[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x,y,z;
        cin >> n >> x >> y >> z;
        long long dem = slove(x, y, z, n);
        cout << dem << endl;
    }
}