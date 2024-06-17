#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        int cnt = 0;
        bool visited[10];
        for(int i = l; i <= r; i++){
            int k = i;
            memset(visited,0, sizeof(visited));
            while(k > 0){
                if(visited[k%10]) break;
                if(k%10 > 5) break;
                visited[k%10]++;
                k /= 10;
            }
            if(k == 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}