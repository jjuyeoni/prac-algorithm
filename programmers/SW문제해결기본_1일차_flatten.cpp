// 1208. [S/W 문제해결 기본] 1일차 - Flatten
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int dump, vSize, n, answer;
int main() {
	
	for (int i = 0; i < 10; i++) {
		cin >> dump;
		vector<int> v(100);
		for (int i = 0; i < 100; i++) {
			cin >> v[i];
		}
		
		sort(v.begin(), v.end());
		for (int j = 0; j < dump; j++) {
			v[0] = v[0] + 1;
			v[99] = v[99] - 1;
			sort(v.begin(),v.end());
		}
		
		answer = v[99] - v[0];
		cout << "#" << i + 1 << " " << answer << '\n';
	} 

	return 0;
}
