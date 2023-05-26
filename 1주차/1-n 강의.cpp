//https://www.acmicpc.net/problem/1629

#include<bits/stdc++.h>
using namespace std;

long long a, b, c;

long long go(long long a, long long b) {
	if (b == 1) return a % c;

	long long ret = go(a, b / 2);
	ret = (ret * ret) % c;
	if (b % 2)ret = (ret*a) % c;// È¦¼ö

	return ret;
}	
int main() {

	cin >> a >> b >> c;
	cout << go(a, b);

}
