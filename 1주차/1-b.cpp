/* 
���� 10808 ����	
https://www.acmicpc.net/problem/10808

!! ī���ý�Ÿ�� �� �Ǵ� �迭  
- map : string�� ������� �ϴ� ���	
- array : integer�� ������� �ϴ� ���	
	but, ���ڰ� sparse�ϰ� ������ ��쿡�� map is better.
*/

#include <bits/stdc++.h>
using namespace std;

string str; 
int cnt[26];
// ���ڸ� counting �ϴ� ����	 
int main(){
	string str; 
	int cnt[26];
	cin >> str;
	for(char a : str){
		// ��ǥ�̵� ��Ų �� ++ ó��  
		// cnt[a - 97] ++;
		cnt[a - 'a']++;
	}
	
	for(int i; i < 26; i++){
		cout << cnt[i] << ' ';
	}
} 

