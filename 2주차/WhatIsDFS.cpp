/*
깊이우선탐색(DFS) ?
- 그래프 탐색 시 사용
- 어떤 노드부터 시작해 인적한 노드들을 재귀적으로 방문하여 방문한 정점은 다시 방문하지 않음
- 각 분기마다 가능한 가장 멀리있는 노드까지 탐색함 

DFS (u, adj)
	u.visited = 1
	for v <- adj[u] 
		if(v.visited = 0)
			DFS(v, adj)
			
DFS 구현하는 방법 2가지
1. visited 배열을 이용(돌다리도 두드려보고 건너자!)
2. 방문여부 상관없이 무조건 함수 호출(못 먹어도 GO) 
			
*/

#include<bits/stdc++.h>
using namespace std;

const int n = 6; 
vector<int> adj[n];
int visited[n];

// 1번 방법	 
void dfs(int u){
	visited[u] = 1;
	cout << "호출: " << u << "\n";
	
	for(int v : adj[u]){
		if(visited[v] == 0){
			dfs(v);
		}
	}

	cout << "종료: " << u << "\n";
	return;
}

// 2번 방법
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




