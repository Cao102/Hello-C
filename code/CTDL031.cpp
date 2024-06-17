#include<bits/stdc++.h>
using namespace std;

int bin[1000],gr[1000];

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long sum = 0;
        int id = 0;
        while(n > 0){
            bin[id] = n%2;
            id++;
            n /= 2;
        }
        gr[id-1] = bin[id-1];
        for(int i = id - 2; i >= 0; i--){
            if(bin[i] != bin[i+1]) gr[i] = 1;
            else gr[i] = 0;
        }
        for(int i = 0; i < id; i++){
            sum += gr[i] * pow(2,i);
        }
        cout << sum << endl;
    }
    return 0;
}