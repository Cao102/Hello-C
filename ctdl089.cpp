#include<bits/stdc++.h>
using namespace std;
int rx[]={1, -1, 0, 0};
int ry[]={0, 0, 1, -1};
int a[505][505];
bool check(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1) return 0;
        }
    }
    return 1;
}
struct data{
            int x,y,z;
        };
int ans=0;       
int main(){
    int t; cin>>t;
    while(t--){
        
        int n,m; cin>>n>>m;
        struct data u,v;
        u.z=0;
        queue<struct data> q;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
                if(a[i][j]==2){
                    u.x=i; u.y=j;
                    q.push(u);
                }
            }
        }
        while(q.size()){
            u=q.front(); q.pop();
            for(int i=0;i<4;i++){
                v.x=u.x+rx[i];
                v.y=u.y+ry[i];
                if(v.x>=1&&v.x<=n&&v.y>=1&&v.y<=m&&a[v.x][v.y]==1){
                    a[v.x][v.y]=2;
                    v.z=u.z+1;
                    q.push(v);
                    ans=max(ans,v.z);
                } 
            }    
        }
        if(check(n,m)) cout<<ans;
        else cout<<"-1";
        cout<<endl;
    }
}