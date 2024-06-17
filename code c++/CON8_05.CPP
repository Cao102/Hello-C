#include<bits/stdc++.h>

using namespace std;
string to_binary(int i){
    string s = "";
    while(i){
        if(i%2){
            s = '1' + s;
            i--;
        }
        else s = '0' + s;
        i /= 2;
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
            cout << to_binary(i) << " ";
        }
        cout<<endl;
    }
    return 0;
}