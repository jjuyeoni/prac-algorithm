/* 
완전탐색 : 모든 경우의 수를 탐색
- 순열 or 조합+로직
(보통 1억 미만)

*/

#include<bits/stdc++.h>
using namespace std;
int n, cnt;
const int INF = 1e6;
int main(){
	cin >>  n;
	
	// for 사용하는 경우 	 
	for(int i = 2400; i <INF;i++){
		string a = to_string(i);
		if(a.find("2400") != string::npos){
			cnt++;
			if (n == cnt){
				cout << a<< '\n';
				break;
			} 
			cout << cnt << " : " << a << '\n';
		}
	}
	// while 사용하는 경우 	 
	int i = 2400;
	while(true){
		string a = to_string(i);
		if(a.find("2400") != string::npos){
			cnt++;
			if (n == cnt){
				cout << a<< '\n';
				break;
			} 
		}
		i++;		
	}
}
 
