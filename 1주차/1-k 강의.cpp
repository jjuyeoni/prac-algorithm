//https://www.acmicpc.net/problem/1213

#include<bits/stdc++.h>
using namespace std;

string name;
int cnt[200], flag;
char mid;
int main(){
// �Ұ����� ��� : Ȧ���� 2�� �̻��� ���	 
	
	cin >> name;
	for(char a : name) cnt[a] ++;
	
	for(int i = 'Z'; i>='A'; i-- ){
		if(cnt[i] % 2 == 1){
			mid = char(i); 
			flag++;
			cnt[i]--; // �Ѱ��� �����ߴٰ� �߾ӿ� �߰�	 
		}
		if(flag == 2) break; // �Ұ���
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
