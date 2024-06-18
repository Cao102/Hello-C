#include<bits/stdc++.h>
using namespace std;
int s[15], e[15], tmp[15], z[15];
int res = 1e9 + 7, mx;

void Try(int k){
    int num = 0;
    while(k){
        int x = k&1;
        bool check = 1;
        for(int j = 1; j < 6; j++){
            if(s[j] != e[j]){
                check = 0;
                break;
            }
        }
        if(check){ res = min(num,res); break;};
        for(int j = 1; j <= 6; j++) z[j] = s[j];
        num++;
        k>>=1; 
        if(!x){
            s[1] = z[4];
            s[2] = z[1];
            s[4] = z[5];
            s[5] = z[2]; 
        }
        else{
            s[2] = z[5];
            s[3] = z[2];
            s[5] = z[6];
            s[6] = z[3];
        }   
    }
}
int main(){
    for(int i = 1; i <= 6; i++) cin >> s[i], tmp[i] = s[i];
    for(int i = 1; i <= 6; i++) cin >> e[i];
    mx = 1<<20;
    for(int i = 1; i <= mx; i++){
        for(int j = 1; j <= 6; j++) s[j] = tmp[j];
        Try(i);
    }
    cout << res << endl;
    return 0;
}