//https://www.acmicpc.net/problem/1940

#include<bits/stdc++.h>
using namespace std;

int n, m, sum;
int a[15000];
int main(){
	cin >> n;
	cin >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if( a[i]+a[j] == m) sum ++;
		}
	}
	
	cout << sum;
}
