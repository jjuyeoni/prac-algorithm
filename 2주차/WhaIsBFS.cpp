/*
�ʺ�켱Ž�� (BFS) ?
- �׷����� Ž���ϴ� �˰���
- � �������� ������ ���� ������ �������� �̵��ϱ� �� ���� ������ ��� ������ Ž��
- �湮�� ������ �ٽ� �湮���� ����
- ���� ����ġ�� ���� �׷������� �ִ� �Ÿ� �˰������� ���.
	-> �׷� ����ġ�� �ٸ� �׷���������? ���ͽ�Ʈ��, �������� ���� ����ؾ���.
 
ť(���Լ���)�� �̿��ؼ� ������. 
1 - 2/3 - 4/5 ���·� ����Ʈ�� ������
1�� ť�� �ְ� ���.
1�� pop�ϰ� ����� 2,3��  push �ϰ� ���.
2,3�� pop�ϰ� ����� 4,5�� push�ؼ� ���... 

 
queue<int> q;
q.push(here);
visited[here] = 1; 
while(q.size()){
	int here = q.front();
	q.pop();
	for(int there : adj[here]){
		if(visited[there]) continue;
		visitied[there] = visited[here] +1; // �ִܰŸ��� ��� �迭�ε� ���� �� ����		 
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
    
    // ���࿡ �������� ���� ������ �ټ����? 
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
    
    bfs(10); // 10������ Ž��. 
    for(int i : nodeList){
        cout << i << " : " << visited[i] << '\n';
    }
    cout << "10�����κ��� 24������ �ִܰŸ��� : " << visited[24] - 1 << '\n';
    return 0; 
} 



