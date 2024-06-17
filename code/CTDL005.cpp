#include<bits/stdc++.h>
using namespace std;

int a[100];
bool check[100];

void show(int n){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}
void sinh(int k, int n){
    for(int i = 1; i <= n; i++){
        if(check[i]){
            check[i] = 0;
            a[k] = i;
            if(k == n){
                show(n);
            }
            else{                
                sinh(k+1,n);
            }
        check[i] = 1;
        }       
}       
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(check,1,sizeof(check));
        int n; 
        cin >> n;
        sinh(1,n);
        cout << endl;
    }
    return 0;
}