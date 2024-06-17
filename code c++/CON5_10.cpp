#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int N,M; cin>>N>>M;
        int a[N+1][M+1],b[N+1][M+1]={};
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++) cin>>a[i][j];
        }
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(i==1) b[i][j]=b[i][j-1];
                else{
                    if(j==1) b[i][j]=b[i-1][j];
                    else b[i][j]=min(b[i-1][j],min(b[i-1][j-1],b[i][j-1]));
                }
                b[i][j]+=a[i][j];
            }
        }
        cout<<b[N][M]<<endl;
    }
}