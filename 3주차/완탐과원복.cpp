/*
원복의 필요성 ? 상태값이 그 다음 경우의 수에 반영이 되면 안될때.

원복의 기본꼴
go(int here){
	visited[there] = 1;
	go(there);
	visitied[there] = 0;
}

문제 :  
A->B-> C/D 의 그래프가 있을때
- 방문한 정점은 또 다시 방문하면 안됨
- 탐색한 정점이 3개라면 출력을 함  

*/

#include<bits/stdc++.h>
using namespace std;

int visited[4];
vector<int> adj[4]; 
vector<int> v; 

void print(){
	for(int i : v) cout << char(i + 'A') << " ";
	cout << '\n';
}

void go(int idx){ 
	//3개의 정점을 탐색하면 print 
    if(v.size() == 3){
        print(); 
		return;
    } 
	for(int there : adj[idx]){
		if(visited[there]) continue;
		
		visited[there] = 1; 
		v.push_back(there); 
		go(there);  
		
		// go 함수 호출한 다음 다시 원복  
		visited[there] = 0;
		v.pop_back();
	} 
}
int main() { 
	adj[0].push_back(1);
	adj[1].push_back(2);
	
	adj[1].push_back(3); 
	adj[1].push_back(0);
	
	adj[2].push_back(1);
	adj[3].push_back(1); // D는 3으로 명칭. 
	
	visited[0] = 1;
	v.push_back(0);
	go(0);  
	
    return 0;
}

