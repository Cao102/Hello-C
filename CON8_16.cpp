#include<bits/stdc++.h>
using namespace std;
int a[15],b[15],s[15],z[15];
int mx,ans=1e9+7;
void Try(int k){
    int num=0;
    while(k){
        int x=k&1;
        bool check=1;      
        for(int i=1;i<6;i++){
            if(s[i]!=a[i]){check=0;break;} 
        }
        if(check){ans=min(num,ans); break;} 
        for(int i=1;i<=6;i++) z[i]=s[i];
        num++;
        k>>=1;
        if(!x){
            s[1]=z[4];
            s[2]=z[1];
            s[4]=z[5];
            s[5]=z[2];
        }
        else{
            s[2]=z[5];
            s[3]=z[2];
            s[5]=z[6];
            s[6]=z[3];
        }
    }
}
int main(){
        for(int i=1;i<=6;i++) cin>>s[i],b[i]=s[i];
        for(int i=1;i<=6;i++) cin>>a[i];
        mx=1<<20;
        for(int j=1;j<=mx;j++){
            for(int i=1;i<=6;i++) s[i]=b[i];
            Try(j);
        }
        cout<<ans<<endl;
        return 0;
    }