/*
���̿켱Ž��(DFS) ?
- �׷��� Ž�� �� ���
- � ������ ������ ������ ������ ��������� �湮�Ͽ� �湮�� ������ �ٽ� �湮���� ����
- �� �б⸶�� ������ ���� �ָ��ִ� ������ Ž���� 

DFS (u, adj)
	u.visited = 1
	for v <- adj[u] 
		if(v.visited = 0)
			DFS(v, adj)
			
DFS �����ϴ� ��� 2����
1. visited �迭�� �̿�(���ٸ��� �ε������ �ǳ���!)
2. �湮���� ������� ������ �Լ� ȣ��(�� �Ծ GO) 
			
*/

#include<bits/stdc++.h>
using namespace std;

const int n = 6; 
vector<int> adj[n];
int visited[n];

// 1�� ���	 
void dfs(int u){
	visited[u] = 1;
	cout << "ȣ��: " << u << "\n";
	
	for(int v : adj[u]){
		if(visited[v] == 0){
			dfs(v);
		}
	}

	cout << "����: " << u << "\n";
	return;
}

// 2�� ���
void dfs2(int u){
	if(visited[u]) return;
	
	visitied[u] = 1;
	for(int v : adj[u]){
		dfs(v);
	}
}

int main(){
    adj[1].push_back(2);
    adj[1].push_back(3); 
    adj[2].push_back(4);  
    adj[4].push_back(2);  
    adj[2].push_back(5);   
    
    dfs(1); 
    dfs2(1);
} 




