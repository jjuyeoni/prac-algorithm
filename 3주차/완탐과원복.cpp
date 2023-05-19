/*
������ �ʿ伺 ? ���°��� �� ���� ����� ���� �ݿ��� �Ǹ� �ȵɶ�.

������ �⺻��
go(int here){
	visited[there] = 1;
	go(there);
	visitied[there] = 0;
}

���� :  
A->B-> C/D �� �׷����� ������
- �湮�� ������ �� �ٽ� �湮�ϸ� �ȵ�
- Ž���� ������ 3����� ����� ��  

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
	//3���� ������ Ž���ϸ� print 
    if(v.size() == 3){
        print(); 
		return;
    } 
	for(int there : adj[idx]){
		if(visited[there]) continue;
		
		visited[there] = 1; 
		v.push_back(there); 
		go(there);  
		
		// go �Լ� ȣ���� ���� �ٽ� ����  
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
	adj[3].push_back(1); // D�� 3���� ��Ī. 
	
	visited[0] = 1;
	v.push_back(0);
	go(0);  
	
    return 0;
}

