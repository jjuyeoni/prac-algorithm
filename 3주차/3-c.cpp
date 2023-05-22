// https://www.acmicpc.net/problem/16234

#include<bits/stdc++.h>
using namespace std;

int n,l,r,sum;
int a[54][54];
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
int visited[54][54];

void dfs(int x, int y){
	visited[x][y] = 1;
	
	for(int i = 0 ; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
		if(a[nx][ny] == 1 && !visited[nx][ny]){
			dfs(nx,ny);
		}	
		cout << nx << " : " << ny <<"\n";
	}
	return;
}
int main(){
	cin >> n >> l >> r;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++){
			if(!a[i][j] && !visited[i][j]){
				dfs(i, j);
//				cout << i << " : " << j << "\n";
//				ret ++;
//				cout << ret << " : DFS가 시작됩니다. \n";
//								
			}
		}
	}
}
