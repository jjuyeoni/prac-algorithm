/* 
누적합 ? 
누적된 합의 의미로 어떠한 배열을 기반으로 앞에서 부터 요소들의 누적된 합을 저장해
새로이 배열을 만들어서 이를 활용하는 것 


prefix sum
- 0 인덱스에 아무 값을 넣지 말고 1 인덱스부터 값을 담아야 만들기 쉬움

psum[1] = 1번째 요소의 합
psum[2] = 1~2번째 요소의 합
..... 와 같은 형태로
psum이라는 새로운 배열을 생성.

배열의 요소가 변하지 않는 정적배열일때 누적합을 사용.
동적배열인 경우 -> 펜익트리 사용  
 
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
