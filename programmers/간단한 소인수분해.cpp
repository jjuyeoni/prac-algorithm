#include<iostream>
using namespace std;

int sum[5] = { 2,3,5,7,11 };
int main() {
	int test_case, num, a;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> num;
		cout << "#" << i + 1 << " ";
		for (int j = 0; j < 5; j++) {
			a = 0;
			while (num % sum[j] == 0) {
				a++;
				num = num / sum[j];
			}
			cout << a << " ";
		}
		cout << "\n";

	}
	return 0;
}
