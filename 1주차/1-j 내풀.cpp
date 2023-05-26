//https://www.acmicpc.net/problem/9375

#include<bits/stdc++.h>
using namespace std;

string a, s;
map<string, int> clothes;
int n, m, sum = 1;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n; // tc
	for (int i = 0; i < n; i++) {
		clothes.clear();
		sum = 1;
		cin >> m; // �ǻ� �� 	

		// �ǻ��� 0���� ���  
		if (m == 0) {
			cout << 0 << "\n";
			continue;
		}

		for (int j = 0; j < m; j++) {
			cin >> a >> s;
			if (clothes[s] == NULL)
				clothes[s] = 1;
			else
				clothes[s]++;
		}

		for (auto it : clothes) {
			sum = sum * (it.second + 1); // �� ���� + �ƹ��͵� ���� ������
		}
		
		cout << sum - 1 << "\n"; // �˸��� ��� -1



	}

}
