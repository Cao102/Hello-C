#include<bits/stdc++.h>
using namespace std;
void show(int i,int N,int arr[],string s){
    for(int j=0;j<=1;j++){
        if(i==N){
            cout<<s<<endl; return;
        }
        else{
            s[arr[i]]=j+'0';
            show(i+1,N,arr,s);
        }
    }
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    int arr[10000];
    while(t--){
        int N=0;
        string s;
        getline(cin,s);
        int l=s.size();
        for(int i=0;i<l;i++){
            if(s[i]=='?'){
            arr[N++]=i;
            }
        }
        show(0,N,arr,s);
}}