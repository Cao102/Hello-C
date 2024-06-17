#include<bits/stdc++.h>
using namespace std;

void binary(int n, int k, string s, int countone){
    if(s.size() == n){
        if(countone == k){
            cout << s << endl;
        }
        return;
    }
    else{
        binary(n, k, s + "0", countone);
        binary(n, k, s + "1", countone + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        string s = "";
        binary(n, k, s, 0);
    }
    return 0;
}