/*
인접리스트(adj) ? 연결 리스트를 여러개 만들어서 그래프를 표현하는 방법  
-> 각 정점마다 연결 리스트를 만들고, 연결되어 있는 정점을 해당 리스트에 포함함. 

벡터가 리스트보다 처리 시간이 빠름
 
*/

#include<bits/stdc++.h>
using namespace std;
const int V = 4;

vector<int> adj[V];
int main(){
	adj[0].push_back(1);	
	adj[0].push_back(2);	
	adj[0].push_back(3);
	
	adj[1].push_back(0);
	adj[1].push_back(2);	
	
	adj[2].push_back(0);
	adj[2].push_back(1);
	
	adj[3].push_back(0);
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < adj[i].size(); j++){
			cout << adj[i][j] << " ";
		}
		cout << '\n';
	}
	
	return 0;
} 
