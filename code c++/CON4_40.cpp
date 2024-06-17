#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int N; cin>>N;
        int a[N+1],dem=0;
        for(int i=0;i<N;i++){
            cin>>a[i];
            if(a[i]==0) dem++;
        }
        cout<<dem<<endl;
    }
}