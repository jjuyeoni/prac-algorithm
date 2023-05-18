//1206. [S/W 문제해결 기본] 1일차

#include<iostream>
#include<algorithm>
using namespace std;

int h[1001];
int main() {
	int num, cnt;
	for (int i = 0; i < 100; i++) {
		cnt = 0;
		fill(&h[0], &h[0] + 1001, 0);
		cin >> num;

		for (int j = 0; j < num; j++) {
			cin >> h[j];
		}

		for (int d = 2; d < num - 2; d++) {
			if (h[d - 2] >= h[d]) continue;
			if (h[d - 1] >= h[d]) continue;
			if (h[d] <= h[d + 1]) continue;
			if (h[d] <= h[d + 2]) continue;
			int dx = max(h[d - 2], h[d - 1]);
			int dy = max(h[d + 2], h[d + 1]);
			cnt += min(h[d] - dx, h[d] - dy);		
		}
		cout << "#" << i+1 << " " << cnt << "\n";
	}

}
