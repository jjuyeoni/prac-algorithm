/* 
���� : �ش� ������ ����
�̸� : �ش� ������ �������� ���� 

�׽�Ʈ ���̽��� 
�ּ�/�ִ뵵 �����ƾ��Ѵ�
or ���ų�, �ְų� 
*/

#include<iostream>
using namespace std;

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };
int visited[101][101];
int map[101][101];
int t, max =1; //�ƹ��͵� ����� ���� ���  

void dfs(int x, int y, int d) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= t || ny >= t) continue;
		if (!visited[nx][ny] && map[nx][ny] > d) dfs(nx, ny, d);
	}
	return;
}
int main() {
	cin >> t;
	// ���������
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			cin >> map[i][j];
		}
	}
	// ���Ḯ��Ʈ ����, dfs�� ���� ����� ���� ���� ã��
	// depth ���� ����
	for (int i = 1; i < 101; i++) {
		fill(&visited[0][0], &visited[0][0]+101*101, 0);
		int ret = 0;

		// map DFS
		for (int k = 0; k < t; k++) {
			for (int l = 0; l < t; l++) {
				if (map[k][l] > i && !visited[k][l]) {
					dfs(k, l, i);
					ret++;
				}
			}
		}
		if (max < ret) {
			max = ret;
		}
	}
	cout << max << "\n";
	return 0;
}
