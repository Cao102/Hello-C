// tạo chuỗi nhị phân nhân 9 sau xét chia ctdl01
#include<bits/stdc++.h>
using namespace std;
int a[10000];
int l;
bool check;
void dequy(int i,int n){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==l){
            int res=0;
            for(int k=1;k<=l;k++){
                res=res*10+a[k];
            }
            res*=9;
            if(res%n==0&&res>=n){
                cout<<res<<endl;
                check=true;
                break;
            }
        }
        else{
            dequy(i+1,n);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        check=false;
        l=1;
        while(check==false){
             dequy(1,n);
             l++;
        }
    }
}