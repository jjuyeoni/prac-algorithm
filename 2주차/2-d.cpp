//https://www.acmicpc.net/problem/2583

#include<bits/stdc++.h>
using namespace std;
#define y1 aaaa

int mp[100][100], m, n, k, visited[100][100];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };
vector<int> ret;

int dfs(int x, int y) {
	int ret = 1;
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny<0 || nx >= n || ny>=m) continue;
		if (visited[nx][ny] == 1 || mp[nx][ny] != 0) continue;
		ret += dfs(nx,ny);
	}

	return ret;
}
void makeMap(int x1, int y1, int x2, int y2) {
	for (int i = x1; i < x2; i++) {
		for (int j = y1; j < y2; j++) {
			mp[i][j]++;
		}
	}
}
int main() {
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		makeMap(x1, y1, x2, y2);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mp[i][j] == 0 && visited[i][j] == 0) {
				ret.push_back(dfs(i, j));
			}
		}
	}
	sort(ret.begin(), ret.end());
	cout << ret.size() << "\n";
	for (int i = 0; i < ret.size(); i++) {
		cout << ret[i] << " ";
	}

}
