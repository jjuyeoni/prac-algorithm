#include <bits/stdc++.h>
using namespace std;
//int main(){
//	int a[] = {2,1,3};
//	sort(a,a+2);
//	do{
//		for(int i :a ) cout << i << ' ';
//		cout << '\n';
//	}while(next_permutation(a,a+3));
//}

int main(){
	vector<int> a = {1,2,3,100,200};
	sort(a.begin(), a.end());
	do{
		for(int i = 0; i<2; i++){
			cout << a[i] << " ";
		}
//		for(int i :a ) cout << i << ' ';
		cout << '\n';
	}while(next_permutation(a.begin(),a.end()));
	// vector 인 경우 예 
}
