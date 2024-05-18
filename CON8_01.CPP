#include<bits/stdc++.h>

using namespace std;



int main(){
    int t; 
    cin >> t;
    while(t--){
        int m;
        int k;
        cin >> k;
        queue<int> q;
        while(k--){
            int n;
            cin >> n;
            if(n == 1) cout << q.size() << endl;
            else if(n == 2){
                if(!q.empty()) cout << "NO" << endl;
                else cout << "YES" << endl;
            }
            else if(n == 3){
                cin >> m;
                q.push(m);
            }
            else if(n == 4){
                if(q.size()) q.pop();
            }
            else if(n == 5){
                if(q.size()) cout << q.front() << endl;
                else cout << "-1" <<endl;
            }
            else if(n == 6){
                if(q.size()) cout << q.back() << endl;
                else cout << "-1" << endl;
            }
        }
        
    }
    return 0;
}