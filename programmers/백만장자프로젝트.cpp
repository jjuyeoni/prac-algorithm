#include<bits/stdc++.h>
using namespace std;

int test_case, N; 
long long sum = 0, mx;
int a[1000010];
int main() {
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		memset(a, 0, sizeof(a));
		sum = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> a[j];
		}

		// ���⿡ solve �ۼ�
		mx = a[N-1];
		for (int j = N - 2; j >= 0; j--) {
			if (mx >= a[j]) sum += mx - a[j];
			else mx = a[j];
		}


		// ��� 
		cout <<"#"<<i+1 <<" "<<sum << "\n";
	}
}
