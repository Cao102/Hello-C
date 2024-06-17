#include<bits/stdc++.h>
using namespace std;

long long toksang10(int k, string  s ){
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            long long h = s[i] - '0';
            sum += h*pow(k,i);
        }
        else{
            long long h = s[i] -'A' + 10;
            sum += h*pow(k,i);
        }
    }
    return sum;
}
string tu10sangk(long long n, int k){
    string result = "";
    while(n){
        int h = n%k;
        if(h < 10){
            result = char(h+'0') + result;
        }
        else{
            result = char(h - 10 + 'A') + result;
        }
        n /= k;
    }
    return result;

}
int main(){
    int t; cin >> t;
    while(t--){
        string a,b;
        int k;
        cin >> k >> a >> b ;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        long long a10 = toksang10(k,a);
        long long b10 = toksang10(k,b);
        cout << tu10sangk(a10+b10,k) << endl;
    }
    return 0;
}