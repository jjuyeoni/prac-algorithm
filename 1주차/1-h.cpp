//https://www.acmicpc.net/problem/2559
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, degree[100004], num=0, max = 0, sum = 0;
	
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> degree[i];
	}
	
	//최초 맥스값 만들기	 
	for(int i = 0; i <k;i++){
		sum += degree[i];
		max = sum;
	}
	
	for(int i = k; i < n;i++){
		sum = sum + degree[i]-degree[i-k];
		if(max < sum) max = sum;
	} 
	 
	
	cout << max;
	return 0;
} 
