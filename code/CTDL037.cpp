#include<bits/stdc++.h>
using namespace std;

int d[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int dem = 0;
        int id = 9;
        while(n){
            dem += n/d[id];
            n = n%d[id];
            id--;
        }
        cout << dem << endl;
    }
    return 0;
}