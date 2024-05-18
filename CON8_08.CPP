#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<long long > q;
        q.push(1);
        long long result;
        while(q.size()){
            result = q.front(); q.pop();
            if(result % n == 0){
                cout << result <<endl;
                break; 
            }
            q.push(result*10);
            q.push(result*10 + 1);
        }
    }
    return 0;
}