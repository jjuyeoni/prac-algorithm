// https://www.acmicpc.net/problem/2589
// 모든 맵에 BFS를 돌리기
 
#include<bits/stdc++.h>
using namespace std;

int dx[] = { -1, 0, 1, 0};
int dy[] = {0,1,0,-1};

int N, M, mx;
char a[54][54];
int visited[54][54];

void bfs(int x, int y){
    memset(visited, 0, sizeof(visited));
	queue<pair<int,int>> q; 
    visited[x][y] = 1; 

    q.push({x,y});

    while(q.size()){
        tie(x,y) = q.front(); 
		q.pop();
		
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if(visited[nx][ny]) continue;
			if(a[nx][ny]=='W')continue;
			visited[nx][ny] = visited[x][y] + 1;
			q.push({nx,ny});
			mx = max(mx,visited[nx][ny]);	
		}
    }

}
int main(){
	cin >> N >> M;
	
	// 보물지도 입력받기 
	for(int i = 0; i < N; i ++){
		for(int j = 0; j < M; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < N; i ++){
		for(int j = 0; j < M; j++){
			if(a[i][j] == 'L') bfs(i,j);
		}
	}
	cout << mx-1 << " ";
}
