//https://www.acmicpc.net/problem/1620
#include<bits/stdc++.h>
using namespace std;

using namespace std;

map<int, string> mp1;
map<string, int> mp2;
int n, m;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string name;
		cin >> name;
		mp1[i + 1] = name;
		mp2[name] = i+1;

	}

	for (int i = 0; i < m; i++) {
		string k;
		cin >> k;

		// 문자인 경우
		if (atoi(k.c_str()) == 0) {
			cout << mp2[k] << "\n";
		}
		// 숫자인 경우
		else {
			cout << mp1[atoi(k.c_str())] << "\n";
		}

	}
	return 0;
}
