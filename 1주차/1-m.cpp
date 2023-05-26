//https://www.acmicpc.net/problem/3986

#include<bits/stdc++.h>
using namespace std;

int tc, flag, sum;
string s;
vector<char> lis;
int a[200];
int main() {
	cin >> tc; // 테스트 갯수
	for (int i = 0; i < tc; i++){
		lis.clear();
		cin >> s; // 단어
		if (s.size() &1 ) continue;
		for (char c : s) {
			if (lis.size() == 0) {
				lis.push_back(c);
				continue;
			}
			if (lis[lis.size() - 1] == c) lis.pop_back();
			else lis.push_back(c);

		}
		if (lis.size() == 0) sum++;
	}

	cout << sum;
	

}
