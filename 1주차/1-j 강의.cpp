//https://www.acmicpc.net/problem/9375

#include<bits/stdc++.h>
using namespace std;

int t, n;
string a, b;
int main() {
	cin >> t;
	while(t--){
		map<string, int> _map;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a >> b;
			_map[b]++;
		}
		
		long long ret = 1; // 경우의 수 같은 경우는 long long 처리	 
		for(auto c : _map){
			ret *=((long long)c.second +1);
		}
		
		ret--;
		 
		cout << ret << "\n";
	}
}
