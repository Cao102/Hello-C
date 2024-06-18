#include<bits/stdc++.h>
using namespace std;

struct point{
	int x, y, z, s;
};
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};
int main(){
	int t;
	cin >> t;
	while(t--){
		int r, l, h, ok = -1;
		cin >> h >> r >> l;
		queue<point> q;;
		point ed, st;
		char mt[r][l][h];
		for(int i = 1; i <= h; i++){
			cin.ignore();
			for(int j = 1; j <= r; j++){
				for(int k = 1; k <= l; k++){
					cin >> mt[i][j][k];
					if(mt[i][j][k] == 'S'){
						st.z = i;
						st.y = j;
						st.z = k;
						st.s = 0;
						mt[i][j][k] = '#';
					}	
				}
			}
		}
		q.push(st);
		while(q.size()){
			point tmp,u = q.front(); q.pop();
			tmp = u;
			tmp.s++;
			if(u.x == ed.x && u.y == ed.y && u.z == ed.z){
				ok = u.s;
				break;
			}
			for(int i = 0; i < 6; i++){
				tmp.x += dx[i];
				tmp.y += dy[i];
				tmp.z += dz[i];
				if(tmp.x >= 1 && tmp.y >= 1 && tmp.z >= 1 && tmp.x <= h && tmp.y <= r && tmp.z <= l && mt[tmp.x][tmp.y][tmp.z] != '#'){
					q.push(tmp);
				}
				tmp.x -= dx[i];
				tmp.y -= dy[i];
				tmp.z -= dz[i];
			}
			cout << ok << endl;
		}
	}
	return 0;
}