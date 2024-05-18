#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int truoc[1005];
bool visited[1005];
int s,e;
void dfs(int x){
	stack<int> st;
	st.push(x);
	
	while(!st.empty()){
		int u=st.top(); 
		st.pop();
		visited[u]=true;
		if(u==e) break; 
		for(int v:adj[u]){
			if(!visited[v]){
				truoc[v]=u;
				st.push(u);
				st.push(v);
				break;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		memset(visited,false,sizeof(visited));
		memset(truoc,0,sizeof(truoc));
		cout<<"Nhap so dinh va so canh: "<<endl;
		int V,E; cin>>V>>E;//V số đỉnh ,E số cạnh 
		cout<<"Nhap canh: "<<endl;
		for(int i=0;i<E;i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y); // Tạo danh sách kề
			adj[y].push_back(x); // Tạo danh sách kề
		}
		for(int i=1;i<=V;i++){
			sort(adj[i].begin(),adj[i].end());
		} 
		cout<<"Nhap dinh bat dau va dich "<<endl;
		 cin>>s>>e;
		dfs(s);
		vector<int> path;
		if(truoc[e]==0){
			cout<<"Khong co duong di"<<endl;
		}
		else{
			path.push_back(e);
			while(truoc[e]!=s){
				path.push_back(truoc[e]);
				e=truoc[e];
			}
			path.push_back(s);
		}
		reverse(path.begin(),path.end());
		for(int i=0;i<path.size();i++){
			cout<<path[i]<<" ";
		}
		cout<<endl;
	}
}