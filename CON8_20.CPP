#include<bits/stdc++.h>

using namespace std;

int l1[] = {3, 0, 2, 7, 4 ,1 ,6, 8, 5, 9};
int r1[] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int l2[] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int r2[] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};

string left1(string s){
    string st = "";
    for(int i = 0; i < 10; i++){
        st +=s[l1[i]];
    }
    return st;
}
string right1(string s){
    string st = "";
    for(int i = 0; i < 10; i++){
        st +=s[r1[i]];
    }
    return st;
}
string left2(string s){
    string st = "";
    for(int i = 0; i < 10; i++){
        st +=s[l2[i]];
    }
    return st;
}
string right2(string s){
    string st = "";
    for(int i = 0; i < 10; i++){
        st +=s[r2[i]];
    }
    return st;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        for(int i = 0; i < 10;i++){
            int c; cin >> c;
            s += to_string(c);
        }
        string b = "1238004765";
        int mn = 1e9;
        queue<pair<string, int>> q1, q2;
        q1.push({s, 0}); q2.push({b, 0});
        map<string, int> m;
        while(q1.size()){
            pair<string, int> k, p = q1.front(); q1.pop();
            k = p;
            k.second = p.second + 1;
            k.first = right1(p.first);
            if(m[k.first] == 0){
                m[k.first] = k.second;        
            }
            q1.push(k);
            k.first = left1(p.first);
            if(m[k.first] == 0){
                m[k.first] = k.second;               
            }
            q1.push(k);
            if(k.second  == 14) break;
        }
        while(q2.size()){
            pair<string, int> k, p = q2.front(); q2.pop();
            k = p;
            if(m[p.first] > 0){
                mn=min(mn, m[p.first] + p.second);
            }// nếu trạng thái đích đã được tìm thấy thì cập nhật kết quả
            k.second = p.second+1;
            k.first = right2(p.first);
            q2.push(k);
            k.first = left2(p.first);
            q2.push(k);
            if(k.second  == 14) break;
        }
        cout << mn << endl;
    }
    return 0;
}