// น้มุ 1159
// https://www.acmicpc.net/problem/1159

#include <bits/stdc++.h>
using namespace std; 

string str,ret;
int num, cnt[26];

int main(){	
	cin >> num;
	
	for(int i = 0; i < num; i++){
		cin >> str;
		cnt[str[0]-'a']++;
	}
	
	for(int i = 0; i< 26; i++){
		if(cnt[i]>=5){
			ret += (i + 'a');
		}
	}
	
	if(ret.size())
		cout << ret;
 	else
 		cout << "PREDAJA";
 		
	return 0;
}
