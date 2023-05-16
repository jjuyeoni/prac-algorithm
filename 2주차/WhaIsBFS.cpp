/*
너비우선탐색 (BFS) ?
- 그래프를 탐색하는 알고리즘
- 어떤 정점에서 시작해 다음 깊이의 정점으로 이동하기 전 현재 깊이의 모든 정점을 탐색
- 방문한 정점은 다시 방문하지 않음
- 같은 가중치를 가진 그래프에서 최단 거리 알고리즘으로 사용.
	-> 그럼 가중치가 다른 그래프에서는? 다익스트라, 벨만포드 등을 사용해야함.
 
큐(선입선출)를 이용해서 구현함. 
1 - 2/3 - 4/5 형태로 리스트가 있을때
1을 큐에 넣고 계산.
1을 pop하고 연결된 2,3을  push 하고 계산.
2,3을 pop하고 연결된 4,5를 push해서 계산... 

 
queue<int> q;
q.push(here);
visited[here] = 1; 
while(q.size()){
	int here = q.front();
	q.pop();
	for(int there : adj[here]){
		if(visited[there]) continue;
		visitied[there] = visited[here] +1; // 최단거리를 담는 배열로도 쓰일 수 있음		 
		// visited[there] = 1;  
		q.push(there);
	}
}

*/

#include<bits/stdc++.h>
using namespace std;     

vector<int> adj[100];
int visited[100]; 
int nodeList[] = {10, 12, 14, 16, 18, 20, 22, 24};

void bfs(int here){
    queue<int> q; 
    visited[here] = 1; 
    q.push(here);
    
    // 만약에 문제에서 시작 시점이 다수라면? 
//	for(int i = 0; i < start; i++) {
//		visited[i] = 1;
//		q.push(i);
//	}

    while(q.size()){
        int here = q.front(); 
		q.pop();
		
        for(int there : adj[here]){
            if(visited[there]) continue;
            visited[there] = visited[here] + 1;
            q.push(there);
        }
    }
}
int main(){
    adj[10].push_back(12);
    adj[10].push_back(14);
    adj[10].push_back(16);
    
    adj[12].push_back(18);
    adj[12].push_back(20);


    adj[20].push_back(22);
    adj[20].push_back(24);
    
    bfs(10); // 10번부터 탐색. 
    for(int i : nodeList){
        cout << i << " : " << visited[i] << '\n';
    }
    cout << "10번으로부터 24번까지 최단거리는 : " << visited[24] - 1 << '\n';
    return 0; 
} 



