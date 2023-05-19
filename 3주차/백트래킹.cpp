#include<bits/stdc++.h>
using namespace std; 
int n, temp, ret;
vector<int> v;   
const int mod = 11;
int cnt = 0;

void go(int idx, int sum){
	// N % 11을 연산 했을때 최대값은 10이기 때문에
	// 그 이상 연산하지 않도록 return 함 
	if(ret == 10) return;
	
	if(idx == n){
		ret = max(ret, sum % mod); 
		cnt++;
		return;
	}
	go(idx + 1, sum + v[idx]);
	go(idx + 1, sum);
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	go(0, 0);
	cout << ret << "\n"; 
	cout << cnt << "\n";
	return 0; 
}

