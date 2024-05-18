#include<bits/stdc++.h>

using namespace std;
int dem(int l, int r){
    int cnt = 0;
    for(int i = l; i <= r; i++){
        int k = i;
        bool visited[10];
        memset(visited, false, sizeof(visited));
        while(k > 0){
            if(visited[k % 10]) break;
            if(k % 10 > 5) break;
            visited[k%10] = true;
            k/=10;
        }
        if(k == 0) cnt++;
    }
    return cnt;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << dem(l,r) << endl;
    }
    return 0;
}