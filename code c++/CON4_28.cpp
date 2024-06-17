#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int l=n/2-1,r=n-1;
        while(l>=0&&r>=n/2){
            if(a[r]>=a[l]*2){
                r--;
                l--;
                ans--;
            }
            else l--;
        }
        cout<<ans<<endl;
    }
    return 0;
}