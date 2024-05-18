#include<bits/stdc++.h>
using namespace std;
int a[10000];
bool check[10000]{0};
void tsum(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    int so1=a[0];
    for(int i=1;i<=n/2-1+n%2;i++){
        so1=so1*10+a[i*2];
    }
    int so2=a[1];
    for(int i=1;i<=n/2-1;i++){
        so2=so2*10+a[i*2+1];
    }
    sum=so1+so2;
    cout<<sum<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        tsum(n);
    }
}