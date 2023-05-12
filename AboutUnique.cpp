/*
�ߺ��� ���� �����ϴ� ���!
1. map�� ���. (or Count �迭�� ������� ����) 
2. unique() �Լ� ���. 
	-> �ð� ���⵵ O(n)
	-> �տ������� ���� ���ذ��鼭 ������ ��� ����.  
*/

#include <bits/stdc++.h>
using namespace std; 

map<int, int> mp;
int main(){
	vector<int> v = {1,2,2,2,2,3,3,3,3};
	vector<int> v1 = {1,2,2,2,2,3,3,3,3};
//	1. map ��� 

//	�迭�� ��ȸ�ϸ鼭 map�� 1�̸� continue, ������ 1�� �־��� 
	for(int i:v){
		if(mp[i]){
			continue;
		}else{
			mp[i] = 1;
		}
	}
	vector<int> ret;
	for(auto it: mp){
		ret.push_back(it.first);
	}
	for(int i : ret) cout << i << '\n';
	cout << "\n-----------------------------------------------\n";
	
//	2. unique �Լ� ���

// 	�ߺ����� ���� ��ҷ� ä�� ��, �� ���� ���ͷ����͸� ��ȯ�Ѵ�.
	auto it = unique(v.begin(), v.end());

// 	�տ��� ���� �ߺ����� �ʰ� ä�� �� ������ ��ҵ��� �״�� �д�.
	for(int i : v) cout << i << '\n';
	cout << "-----------------------------------------------\n";
	
// 	�ڿ� �ǹ̾��� ������ ���� ���ֱ� ���� sort(), erase() �Լ��� ���.
	sort(v1.begin(), v1.end());
	v1.erase(unique(v1.begin(), v1.end()), v1.end());
	for(int i : v1) cout << i << '\n';
	 
} 
