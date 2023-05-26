//https://www.acmicpc.net/problem/1992

#include<bits/stdc++.h>
using namespace std;

char mp[64][64];
int n;
string s;

string go(int x, int y, int size) {
	if (size == 1) return string(1, mp[x][y]);
	char start = mp[x][y];
	string ret = "";
	for (int i = x; i < x+size; i++) {
		for (int j = y; j < y+size; j++) {
			if (mp[i][j] != start) {
				ret += "(";
				ret += go(x, y, size / 2);
				ret += go(x, y + size / 2, size / 2);
				ret += go(x + size / 2, y, size / 2);
				ret += go(x + size / 2, y + size / 2, size / 2);
				ret += ")";
				return ret;
			}
		}
	}
	return string(1, mp[x][y]);
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			mp[i][j] = s[j];
		}
	}

	cout << go(0, 0, n);
}
