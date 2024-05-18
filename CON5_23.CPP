#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> v(n + 1, 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] <= a[i]){
                    v[i] = max(v[i], v[j] + 1);
                }
            }
        }
        cout << n - *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}