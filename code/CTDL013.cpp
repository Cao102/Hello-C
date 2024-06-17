#include<bits/stdc++.h>
using namespace std;

int a[100];
bool check[100];
void show(int k){
    for(int i = 1; i <= k ; i++){
        cout << a[i];
    }
    cout << " ";
}
void sinh(int i, int n, int k){
    for(int j = a[i-1] + 1; j <= n ; j++){
        if(check[j]){
            check[j] = 0;
            a[i] = j;
            if(i == k){
                show(k);
            }
            else{
                sinh(i+1,n,k);
            } 
            check[j] = 1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        memset(check,1,sizeof(check));
        int n, k; 
        cin >> n >> k;
        sinh(1,n,k);
        cout << endl;
    }
    return 0;
}