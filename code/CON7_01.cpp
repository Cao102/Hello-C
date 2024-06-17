#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<int> v;
    string s;
    while(cin >> s){
        if(s == "push"){
            cin >> x; v.push_back(x);
        }
        if(s == "pop"){
            if(v.size()) v.pop_back();
        }
        if(s == "show"){
            if(v.empty()) cout << "empty" << endl;
            else{ 
                for(int i: v) cout << i << " ";
                cout << endl;
            }
        }
    }
    return 0;
}