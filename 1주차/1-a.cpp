// 백준 2309 일곱난쟁이
// 순열을 할때는 항상 sort()!!
 
#include <bits/stdc++.h>
using namespace std;

pair<int, int> ret;
int a[9];

// 조합 함수	 
void solve(){
	int sum = 0;
	for(int i = 0; i<9; i++){
		for(int j = 0; j < i; j++){
			if((sum-a[i]-a[j]) == 100){
				ret =  {i,j};
				return;
			}
		}
	}
} 
	 
int main(){
	vector<int> v;
	
	for(int i = 0; i<9; i++){
		cin >> a[i];
	}
	cout << '\n';
	// 순열
	sort(a, a+9);
	do{
		int sum = 0;
		for(int j = 0; j < 7; j++){
			sum += a[j];
		}	
		if(sum > 100) break;
	}while(next_permutation(a, a+9));
	

	for(int i = 0; i < 7; i++)
		cout << a[i] << '\n';
	cout << '\n';
	// 조합	
	// 전체 합 중에 100을 넘게 만드는 난쟁이 2명을 뽑는 방법 = 9C2
	solve();
	for(int i = 0; i<9; i++){
		if(ret.first == i || ret.second == i) continue;
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	
	for(int i = 0; i < 7; i++){
		cout << v[i] << ' ';
	}
	cout << '\n';
}   

 
