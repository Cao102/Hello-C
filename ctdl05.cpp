#include<bits/stdc++.h>
using namespace std;
int arr[100];
int check[1000]={0};
void show(int n){
       for(int i=1;i<=n;i++){
        cout<<arr[i];
       }
       cout<<" ";
}
void dequy(int i,int n){
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            check[j]=1;
             arr[i]=j;
          if(i==n){
            show(n);
        }
        else{
            dequy(i+1,n);
        } 
        check[j]=0; 
        }  
    }
}
int main(){
    int t; cin>>t;
    while (t--)
    {
       int n; cin>>n;
       dequy(1,n);
       cout<<endl;
    }   
}