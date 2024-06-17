#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            bool check=1;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]){cout<<a[j]<<" "; check=0; break;} 
            }
            if(check==1) cout<<-1<<" ";
        }
        cout<<endl;
    }
}