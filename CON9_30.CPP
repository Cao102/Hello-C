#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int e, v, ok =1;
        cin >> e >> v;
        int a[e+5] = {};
        for(int i = 0; i < v; i++){
            int x, y;
            cin >> x >> y;
            a[x]++;
            a[y]--;
        }
        for(int i = 1; i <= e; i++){
            if(a[i] != 0){
                ok = 0;
                cout << 0 << endl;
                break;
            }
        }
        if(ok) cout << 1 << endl;
    }
    return 0;
}