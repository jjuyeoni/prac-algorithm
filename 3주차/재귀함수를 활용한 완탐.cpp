/* 
반복문을 만들 수 있을때는 반목문을 사용!
재귀함수보다는 반목분이 더 빠름.

아래의 경우에는 재귀함수 활용하는 것이 좋다! 
- 조함 or 순열 + DFS, BFS 등 알고리즘
- 경우의 수마다 생각해야하는 로직  
*/

#include<bits/stdc++.h>
using namespace std; 
int n, temp;
vector<int> v;  

//소수 확인 함수  
bool check(int n) { 
    if(n <= 1) return 0;
    if(n == 2) return 1; 
    if(n % 2 == 0) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

//포함 or 미포함 확인  
int go(int idx, int sum){ 
	if(idx == n){
		//cout << "SUM " << sum << "\n";
		return check(sum); 
	}
	return go(idx + 1, sum + v[idx]) + go(idx + 1, sum);
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	cout << go(0, 0) << "\n"; 
	return 0; 
}



