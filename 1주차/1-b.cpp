/* 
백준 10808 문제	
https://www.acmicpc.net/problem/10808

!! 카운팅스타는 맵 또는 배열  
- map : string을 기반으로 하는 경우	
- array : integer을 기반으로 하는 경우	
	but, 숫자가 sparse하게 들어오는 경우에는 map is better.
*/

#include <bits/stdc++.h>
using namespace std;

string str; 
int cnt[26];
// 문자를 counting 하는 문제	 
int main(){
	string str; 
	int cnt[26];
	cin >> str;
	for(char a : str){
		// 좌표이동 시킨 후 ++ 처리  
		// cnt[a - 97] ++;
		cnt[a - 'a']++;
	}
	
	for(int i; i < 26; i++){
		cout << cnt[i] << ' ';
	}
} 

