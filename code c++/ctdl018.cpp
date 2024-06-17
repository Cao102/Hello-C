#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[10000],b[10000];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        cout<<"[";
        for(int i=0;i<n;i++){
            cout<<a[i];
            if(i!=n-1) cout<<" ";
        }
        cout<<"]"<<endl;;
        int k=n-1;
        for(int i=0;i<n-1;i++){
            cout<<"[";
            for(int j=0;j<k;j++){
               b[j]=a[j]+a[j+1];
               a[j]=b[j];
               cout<<b[j];
               if(j!=k-1) cout<<" ";  
            }
            k--;
            cout<<"]"<<endl;
        }
    }
}