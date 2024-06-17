#include<bits/stdc++.h>
using namespace std;

#define max 1000
int n, s;
int tree[1000];
bool ok;
void dequy(int p, int value){
    if(p >= n || tree[p] == -1 || ok) return;
    if(tree[p*2+1] ==-1 && tree[p*2+2] == -1 ){
        if(value + tree[p] == s) ok = true;
        return;
    }
    if(tree[p*2+1] |=-1) dequy(p*2+1, value + tree[p]);
    if(tree[p*2+2] |=-1) dequy(p*2+2, value + tree[p]);
}    
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        memset(tree,-1,sizeof(tree));
        for(int i = 0; i < n; i++){
            cin >> tree[i];
        }        
        ok = 0;
        dequy(0,0);
        if(ok) cout << "True" << endl;
        else cout << "False" << endl;
    }
    return 0;
}