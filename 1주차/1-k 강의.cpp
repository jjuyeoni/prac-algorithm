//https://www.acmicpc.net/problem/1213

#include<bits/stdc++.h>
using namespace std;

string name;
int cnt[200], flag;
char mid;
int main(){
// 불가능한 경우 : 홀수가 2개 이상인 경우	 
	
	cin >> name;
	for(char a : name) cnt[a] ++;
	
	for(int i = 'Z'; i>='A'; i-- ){
		if(cnt[i] % 2 == 1){
			mid = char(i); 
			flag++;
			cnt[i]--; // 한개는 비축했다가 중앙에 추가	 
		}
		if(flag == 2) break; // 불가능
		for(int j = 0; j < cnt[i]; j +=2){
			ret = char(i) + ret;
			ret += char(i);
		} 
	}
	if(mid){	
		ret.insert(ret.begin() + ret.size()/2, mid);
	}
	if(flag == 2) {
		cout << "I'm Sorry Hansoo\n";
	}
	else
		cout << ret << "\n";
		
	return 0;
	}
} 
