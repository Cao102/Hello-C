#include<bits/stdc++.h>
using namespace std;

int a[1005];
void show(int n){
    for(int i = 0; i < n; i++){
        if(a[i] == 0) cout << "A";
        else cout << "B";
    }
    cout << " ";
}
void sinh(int k,int n){
    if(k == n){
        show(n);
    }
    else for(int i = 0; i <= 1; i++){
        a[k] = i;
        sinh(k+1,n);
    }
}
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        sinh(0,n);
        cout << endl;
    }
    return 0;
}