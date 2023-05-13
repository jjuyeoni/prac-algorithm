// น้มุ 10988
// https://www.acmicpc.net/problem/10988

#include <bits/stdc++.h>
using namespace std; 

int main(){
	string str = " ";
	string rev = " ";
	cin >> str;
	rev = str;

	reverse(rev.begin(),rev.end());
	if(str.compare(rev)==0)
		cout << 1;	
	else
		cout << 0;
	return 0;
} 
