#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int b=n-1;
		vector<int> a(n);
		stack<vector<int>> st;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			int k=a[i];
			int j=i-1;
			while(j>=0&&a[j]>k){
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=k;
			st.push(a);
		}
		while(st.size()){
			a=st.top(); st.pop();
			cout<<"Buoc "<<b--<<": ";
			for(int i=0;i<=b+1;i++) cout<<a[i]<<" ";
			cout<<endl;
		}
	}
}