#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        queue<int> q;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        cout << "[";
        for(int i = 0; i < n; i++){
            cout << a[i] ;
            if(i != n-1) cout << " ";
        }
        cout << "]" << endl;
        for(int i = n - 1; i > 0; i--){
            int k = i;
            cout << "[";
            while(k--){
                int a = q.front(); q.pop();
                a += q.front(); 
                q.push(a);
                cout << a;
                if(k != 0) cout << " "; 
            }
            q.pop();
            cout << "]";         
            cout << endl;
        }
    }
    return 0;
}