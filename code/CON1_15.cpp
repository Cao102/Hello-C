#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void next(string &s){
    int n = s.length();
    int i, j;
    for(i = n - 2; i >= 0; i--){
        if(s[i] < s[i+1]){
            break;
        }
    }
    if(i < 0){ cout << "BIGGEST" ;}
    else{
        for(j = n - 1; j > i; j--){
            if(s[j] > s[i]) break;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        cout << s ;
    }
    
}
int main(){
    int t; cin >> t;
    while(t--){
        int testcase; 
        string s;
        cin >> testcase >> s;
        cout << testcase << " ";
        next(s);
        cout << endl;
    }
    return 0;
}