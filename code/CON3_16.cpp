#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int s, n; cin >> s >> n;
        int a[n+1];
        if(n*9 < s) cout << -1 << endl;
        else if(s == 0){
            if(n == 1) cout << 0 << endl;
            else cout << -1 << endl;
        }
        else{
            s--;
            for(int i = n - 1; i > 0; i--){
                if(s > 9){ 
                    a[i] = 9; s -= 9;
                }
                else{
                    a[i] = s;
                    s = 0;
                }
            }
            a[0] = s + 1;
            for(int i = 0; i < n; i++) cout << a[i] ;
            cout << endl;
        }
    }
    return 0;
}