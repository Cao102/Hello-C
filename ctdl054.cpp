#include<bits/stdc++.h>
using namespace std;
double capdiem(vector<pair<int,int>> & points){
    sort(points.begin(), points.end());
    double min_d=pow(10,6);
    for(int i=0;i<points.size();i++){
        double x=points[i].first - points[i + 1].first;
        double y=points[i].second-points[i+1].second;
        double d=sqrt(pow(x,2)+pow(y,2));
        min_d=min(min_d,d);
    }
    return min_d;
}
int main(){
    int t; cin>>t;
    while(t--){
        int N; cin>>N;
        vector<pair<int, int>> points(N);
        for(int i=0;i<N;i++){
            cin>>points[i].first>> points[i].second;
        }
        cout << fixed;
        cout.precision(6);
        cout << capdiem(points) << endl;
    }
}