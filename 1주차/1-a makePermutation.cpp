// ���� 2309 �ϰ�������
// ����Լ� version
 
#include <bits/stdc++.h>
using namespace std;
int a[9];

void solve(){
	int sum = 0;
	for(int i = 0; i<7;i++){
		sum += a[i];
	}
	if(sum == 100){
		sort(a, a+7);
		for(int i = 0; i< 7; i++)
			cout << a[i] << '\n'; 
		exit(0); // ���� �Լ���ü�� ������ѹ���	 
	}
}

// n�� �迭�� ũ��, r�� ��� ������, depth�� 0���� �迭�� ũ����� ����	 
void makePermutation(int n, int r, int depth){
	if(r == depth){
		solve();
	}
	for(int i = depth; i < n; i++){
		swap(a[i],a[depth]);
		makePermutation(n,r,depth+1);
		swap(a[i],a[depth]);
	}
}
int main(){

	
	for(int i = 0; i < 9; i++){
		cin >> a[i];
	}
	makePermutation(9,7,0);
	
}
