#include<bits/stdc++.h>
using namespace std;

int a[1005];
void show(int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void sinh(int k, int n){
    if(k == n){
            show(n);
        }
    else for(int j = 0; j <= 1; j++){
            a[k] = j;
            sinh(k+1,n);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        sinh(0,n);
    }
    return 0;
}