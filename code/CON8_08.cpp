#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<int> q;
        q.push(1);
        while(q.size()){
            int x = q.front(); q.pop();
        if(x%n == 0){
            cout << x << endl;
            break;
        }
        else{
            q.push(x*10);
            q.push(x*10+1);
        }
        }
    }
    return 0;
}