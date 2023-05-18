#include<iostream>
using namespace std;


int main() {
	int t, num, answer;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> num;
		if (num < 3) {
			answer = 0;
		}
		else
			answer = num / 3;

		cout << "#" << i+1 << " " << answer << "\n";

	}
	return 0;
}
