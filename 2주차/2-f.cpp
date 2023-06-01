//https://www.acmicpc.net/problem/2828

#include<bits/stdc++.h>
using namespace std;

int n, m, j, ret;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m; // 스크린 칸, 바구니
	v.push_back(1);
	v.push_back(m);

	cin >> j; // 사과 개수

	for (int i = 0; i < j; i++) {
		int num;
		cin >> num;
		if (num >= v[0] && num <= v[1]) continue;
		else if (num < v[0]) {
			ret += (v[0] - num);
			v[1] = v[1] - (v[0] - num);
			v[0] = v[0] - (v[0] - num);
		}
		else if (num > v[1]) {
			ret += (num - v[1]);
			v[0] = v[0] + (num - v[1]);
			v[1] = v[1] + (num - v[1]);
		}
	}

	cout << ret;
}
