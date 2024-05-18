#include<bits/stdc++.h>
 
using namespace std;
 int cata[105];
int main(){
    int t;
    cin>>t;
    cata[0]=1;
    for(int i=1;i<=105;i++){
        cata[i]=(4*i-2)*cata[i-1]/(i+1);
    }
    while(t--){
        int n;
        cin>>n;
        cout<<cata[n]<<endl;
    }
    return 0;
}