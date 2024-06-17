#include<bits/stdc++.h>
using namespace std;
int a[1005][10005];
int main(){
        int n; char k; int x;
        cin>>n;
        for(int i=1;i<=n;i++){
            while(scanf("%d%c",&x,&k)!=EOF){
                a[i][x]=1;
                if(k=='\n'){
                 break;   
                } 
        }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }