#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n == 1 || n ==0 ) return 1;
	return n* fact(n-1);
}

// 반복문으로 생성 가능한 팩토리얼 함수	 
int fact1(int n){
	int ret = 1;
	int i = 0;
	for (i = 1; i <=n; i++){
		ret *= i;
	}
	return ret;
}

int fibo(int n){ 
	if(n == 0 || n == 1) return n;
	return fibo(n-1) + fibo(n-2);
}

int n = 2;
int main(){
	cout << fibo(n) << "\n"; 
	return 0;
}
