#include<bits/stdc++.h>
using namespace std;
int n,cnt;
struct congviec{
    int si;// điểm bắt đầu 
    int fi;// điểm kết thúc
};
congviec cv[1000];
bool cmp(congviec x,congviec b){
    return x.fi <b.fi; //xếp theo thời gian Kt tăng dần
}
void sxcv(){
    int i=0;
    for(int j=1;j<n;j++){
        if(cv[j].si>=cv[i].fi){
            cnt++;
            i=j;
        }
    }
}
void slove(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>cv[i].si;
    for(int i=0;i<n;i++) cin>>cv[i].fi;
    sort(cv,cv+n,cmp);
    cnt=1;
    sxcv();
    cout<<cnt<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        slove();
    }
}