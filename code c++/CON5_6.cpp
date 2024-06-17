#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        s="x"+s;
        int n=s.size();
        bool F[n+1][n+1];
        int d=1;
        memset(F,false,sizeof(F));
        for(int i=1;i<=n;i++) F[i][i]=true;
        for(int len=2;len<=n;len++){
            for(int i=1;i<=n-len+1;i++){
                int j = i+len-1;
                if(len==2&& s[i]==s[j]) F[i][j]=true;
                else{
                    F[i][j]=F[i+1][j-1]&&s[i]==s[j];
                }
                if(F[i][j]) d=max(d,len);
            }
        }
        cout<<d<<endl;
    }
}