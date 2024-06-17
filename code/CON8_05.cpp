#include<bits/stdc++.h>
using namespace std;
string bin(int n){
    string s = "";
    while(n){
        if(n%2) s = '1' + s;
        else s = '0' + s;
        n /= 2;
    }
    return s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << bin(i) << " ";
        }
        cout << endl;
    }
    return 0;
}