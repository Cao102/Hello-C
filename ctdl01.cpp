#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void show(int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void dequy(int i,int n){
    for(int j=0;j<=1;j++){
        arr[i]=j;
     if(i==n){
         show(n);
     }
    else{
        dequy(i+1,n); 
    }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        dequy(1,n);
    }
}