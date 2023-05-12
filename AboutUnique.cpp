/*
중복된 값을 제거하는 방법!
1. map을 사용. (or Count 배열을 만들수도 있음) 
2. unique() 함수 사용. 
	-> 시간 복잡도 O(n)
	-> 앞에서부터 서로 비교해가면서 동일한 경우 삭제.  
*/

#include <bits/stdc++.h>
using namespace std; 

map<int, int> mp;
int main(){
	vector<int> v = {1,2,2,2,2,3,3,3,3};
	vector<int> v1 = {1,2,2,2,2,3,3,3,3};
//	1. map 사용 

//	배열을 순회하면서 map이 1이면 continue, 없으면 1을 넣어줌 
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
	
//	2. unique 함수 사용

// 	중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.
	auto it = unique(v.begin(), v.end());

// 	앞에서 부터 중복되지 않게 채운 후 나머지 요소들은 그대로 둔다.
	for(int i : v) cout << i << '\n';
	cout << "-----------------------------------------------\n";
	
// 	뒤에 의미없는 쓰레기 값을 없애기 위해 sort(), erase() 함수를 사용.
	sort(v1.begin(), v1.end());
	v1.erase(unique(v1.begin(), v1.end()), v1.end());
	for(int i : v1) cout << i << '\n';
	 
} 
