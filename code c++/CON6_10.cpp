#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v;
        bool check[10];
        memset(check,true,sizeof(check));
        for(int i=0;i<n;i++){
            long long x; cin>>x;
            while(x){
                int so=x%10;
                if(check[so]){
                    v.push_back(so);
                    check[so]=false;
                }
                x/=10;
            }
        }
        sort(v.begin(),v.end());
        for(int &x:v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}