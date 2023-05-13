// 백준 2979 
// https://www.acmicpc.net/problem/2979

#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int isCar[100];
int k, q;

void payment(){
	int price = 0;
	for(int i = 1; i < 100; i++){
		if(isCar[i]==1) 
			price += a;
		else if(isCar[i]==2)
			price += (b*2);
		else if(isCar[i]==3)
			price += (c*3);
	}
	cout << price << ' ';
}
int main(){
	// 주차요금 a,b,c 입력
	cin >> a >> b >> c;
	
	// 트럭이 주차장에 도착한 시간과 떠난 시간 입력  
	for(int i = 0; i < 3; i++){
		cin >> k >> q;
		for(int j = k; j < q; j++){
			isCar[j]++;
		}
	}

	payment();
}
 
