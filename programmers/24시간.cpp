#include<iostream>
using namespace std;


int main() {
	int t, n, m, answer;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		if ((m + n) > 24) {
			answer = (m + n - 24);
		}
		else
			answer = (m + n);

		if (answer == 24)
			answer = 0;
		
		cout << "#" << i + 1 << " " << answer << "\n";
	}
	return 0;
}
