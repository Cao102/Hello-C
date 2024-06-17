#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> X(k);
        for(int i=0; i<k; i++)
            cin >> X[i];

        int i = k-1;
        while(i >= 0 && X[i] == n-k+i+1)
            i--;
        if(i >= 0){
            X[i]++;
            for(int j=i+1; j<k; j++)
                X[j] = X[j-1] + 1;
        }
        else{
            for(int j=0; j<k; j++)
                X[j] = j+1;
        }

        for(int i=0; i<k; i++)
            cout << X[i] << " ";
        cout << endl;
    }
    return 0;
}