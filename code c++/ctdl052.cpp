#include<bits/stdc++.h>
using namespace std;
int tuksang10(int k, string s){
    int sum=0;
    int power=1;
    for(int i=s.size()-1;i>=0;i--){
        int digit=0;
        if(s[i]>='0'&&s[i]<='9'){
            digit=(s[i]-'0');
        }
        else{
            digit=(s[i]-'A'+10);
        }
        sum+=digit*power;
        power*=k;
    }
    return sum;
}
string tu10sangk(int n,int k){
    string result = "";
    while(n>0){
        int h=n%k;
        if(h<10){
            result=char(h+'0') + result;
        }
        else{
            result=char(h-10+'A') +result;
        }
        n/=k;
    }
    return result;
}
string KQ(int k, string a, string b){
    int a1=tuksang10(k,a);
    int b1=tuksang10(k,b);
    int sum=a1+b1;
    string K=tu10sangk(sum,k);
    return K;
}
int main(){
    int t; cin>>t;
    while(t--){
        int k; 
        string a,b; cin>>k>>a>>b;
        cout<<KQ(k,a,b)<<endl;
    }
}