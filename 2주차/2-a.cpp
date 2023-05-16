#include<bits/stdc++.h>
using namespace std;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };
int visited[104][104];
int adj[104][104];
int main() {
	int n, m, x, y;
	scanf("%d %d", &n, &m);

	for (int i = 0; i <n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &adj[i][j]);
		}
	}

	queue<pair<int, int>> q;
	visited[0][0] = 1;
	q.push({ 0,0 });

	while (q.size()) {
		tie( x, y ) = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || adj[nx][ny] == 0) continue;
			if (visited[nx][ny]) continue;
			visited[nx][ny] = visited[x][y] + 1;
			q.push({ nx,ny });
		}		
	}
	return 0;
}


