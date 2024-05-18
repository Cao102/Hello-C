#include<bits/stdc++.h>

using namespace std;
string s1, s2;
int dem(){
    int n = s1.size();
        int m = s2.size();
        int dp[n+1][m+1];
        for(int i = 0; i <= n; i++){
            for(int j = 0;  j <= m;  j++){
                if(i == 0) dp[i][j] = j;
                else if(j == 0) dp[i][j] = i;
                else if(s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
                }
            }
            }
            return dp[n][m];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        cout << dem() << endl;
        }
        
    return 0;
}