#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k,  ans = 0;
		cin >> n >>k;
		int a[n],b[k];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < k; i++)
			cin >> b[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				double check=(double)log2(a[i])-(double)(log2(b[j])*a[i]/b[j]);
				if(check>0) ans++;
			}
			
			}
		cout << ans << endl;
	}
}