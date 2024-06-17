#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        bool check = 0;
        for(int i = 0; i <= n/4; i++){
            if((n-i*4)%7 == 0){
                check = 1;
                for(int j = 1; j <= i; j++) cout << "4";
                for(int j = 1; j <= (n-i*4)/7; j++) cout << "7";
                break;
            }
        }
        if(check == 0) cout << -1 << endl;
        else cout << endl;
    }
    return 0;
}