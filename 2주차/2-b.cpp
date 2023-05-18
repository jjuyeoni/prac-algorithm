//https://www.acmicpc.net/submit/1012

#include<iostream>
#include<vector>
using namespace std;

int adj[51][51];
int visited[51][51];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0,1,0,-1 };
int T, M, N, K, x, y, ret;

void dfs(int x, int y) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
		if (adj[nx][ny] == 1 && !visited[nx][ny]) {
			dfs(nx, ny);
		}
	}
	return;
}

int main() {
	cin >> T;

	for (int i = 0; i < T; i++) {
		fill(&adj[0][0], &adj[0][0] + 51*51, 0);
		fill(&visited[0][0], &visited[0][0] + 51*51, 0);
		ret = 0;
		
		cin >> M >> N >> K;
		
		// ���߹� �����
		for(int j = 0; j < K; j++) {
			cin >> x >> y;
			adj[x][y] = 1;
		}
		
		// ���߹� DFS
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (adj[i][j] == 1 && !visited[i][j]) {
					ret ++;
					dfs(i, j);
				}
			}
		}

		// ������ ���� �� ���
		cout << ret << "\n";

	
	}

}

