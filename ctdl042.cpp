#include<bits/stdc++.h>
using namespace std;
int a[10000],b[10000];
int n;
void tich(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
             if(b[i]>b[j]) swap(b[i],b[j]);
        }
    }
    int tich=0;
    for(int i=0;i<n;i++){
        tich+=a[i]*b[i];
    }
    cout<<tich<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        tich(n);
    }
}