#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool check(char c){
    return (c >= '1' && c <= '9');
}
ll Exp(ll a, ll b, char c){
	if(c == '+') return a + b;
	if(c == '-') return a - b;
	if(c == '*') return a * b;
	return a / b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.length();
		stack<ll> st;
		for(int i = 0; i < n; ++i){
			if(check(s[i])) st.push(s[i] - '0');
			else{
				ll x = st.top(); st.pop();
				ll y = st.top(); st.pop();
				ll tmp = Exp(y, x, s[i]);
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
	return 0;
 }