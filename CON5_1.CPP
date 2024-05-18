#include<bits/stdc++.h>

using namespace std;



int xauchung(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s1[i] == s2[j]) dp[i+1][j+1] = dp[i][j] + 1;
            else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        }
    }
    return dp[n][m];
}
int main(){
    int t;
    cin >> t;
    while(t--){  
        string s1, s2;      
        cin >> s1 >> s2; 
        cout << xauchung(s1, s2) << endl;
    }
    return 0;
}