/* 
������ ? 
������ ���� �ǹ̷� ��� �迭�� ������� �տ��� ���� ��ҵ��� ������ ���� ������
������ �迭�� ���� �̸� Ȱ���ϴ� �� 


prefix sum
- 0 �ε����� �ƹ� ���� ���� ���� 1 �ε������� ���� ��ƾ� ����� ����

psum[1] = 1��° ����� ��
psum[2] = 1~2��° ����� ��
..... �� ���� ���·�
psum�̶�� ���ο� �迭�� ����.

�迭�� ��Ұ� ������ �ʴ� �����迭�϶� �������� ���.
�����迭�� ��� -> ����Ʈ�� ���  
 
*/
#include<bits/stdc++.h>
using namespace std;

int N, M, a, b, sum;

int main(){
	cin >> N >> M;

	vector<int> numbers(N);
	vector<int> psum(N);
	for(int i = 1; i <= N; i++){
		cin >> numbers[i];
	}

	psum[0] = 0;
	for(int i = 1; i <= N; i++){
		psum[i] = psum[i-1] + numbers[i];
	}
	for(int i = 1; i <= N; i++){
	cout << psum[i] << " ";
	}
	for(int i = 0; i < M; i++){
		cin >> a >> b;
		sum = psum[b] - psum[a-1];
		cout << sum << "\n";
	}
	
}
