// 만약에 그래프를 탐색이나 퍼져나가는 문제에서는 dfs나 bfs를 사용.
 
#include<bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
int a,b;
int adj[100][100];
bool visited[100][100];

void dfs(int x, int y){
	visited[x][y] = 1;
	
	for(int i = 0 ; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= a || ny >= b) continue;
		if(adj[nx][ny] == 1 && !visited[nx][ny]){
			dfs(nx,ny);
		}	
	}
	return;
}

int main(){
	int ret = 0;
	cin >> a >> b;
	
	for(int i = 0; i < a; i ++){
		for(int j = 0; j < b; j++){
			cin >> adj[i][j];
		}
	}
	
	for(int i = 0; i < a; i ++){
		for(int j = 0; j < b; j++){
			if(adj[i][j] == 1 && !visited[i][j]){
				dfs(i, j);
				cout << i << " : " << j << "\n";
				ret ++;
				cout << ret << " : DFS가 시작됩니다. \n";
								
			}
		}
	}
}
