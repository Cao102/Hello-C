#include<bits/stdc++.h>
using namespace std;
int a[10000];
bool check[10000]{0};
void tsum(int n){
    int sum=0;
    for(int i=n-1;i>=0;i--){
        int max=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
        sum+=a[i]*i;
    }
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