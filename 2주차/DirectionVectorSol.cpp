#include<bits/stdc++.h>
using namespace std;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

const int V = 3;
int a[V][V], visited[V][V];

void go(int x, int y){
	
	visited[x][y] = 1;
	cout << x << " : " << y << '\n';
	
	for(int i = 0 ; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= V || ny >= V) continue;
		if(a[nx][ny] == 0) continue; 
		if(visited[nx][ny]) continue;
		go(nx,ny);
	}
}
	
	
int main(){
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			cin >> a[i][j];
		}
	}
	
	go(0,0);
	
}
