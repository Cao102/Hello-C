#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void show(int n){
    for(int i=0;i<n;i++){
            if(arr[i]==0) cout<<"A";
            else cout<<"B";
    }
    cout<<" ";
}
void dequy(int i,int n){
    for(int j=0;j<=1;j++){
        if(i==n){
        show(n);
        return;
    }
    else{
        arr[i]=j;
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
        dequy(0,n);
        cout<<endl;
    }
}