#include<bits/stdc++.h>
using namespace std;

int a[1000];

void show(int n){
    for(int i = 0; i < n; i++){
        if(a[i]) cout << "B";
        else cout << "A";
    }
    cout << " ";
}
void binary(int k, int n){
    if(k == n){
        show(n);
        return;
    }
    else for(int j = 0; j <= 1; j++){
        a[k] = j;
        binary(k+1, n);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        binary(0,n);
        cout << endl;
    }
    return 0;
}