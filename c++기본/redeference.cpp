/*
What is 역참조 연산자?
변수의 주소를 가리키는 포인터를 기반으로 
해당 주소에 담겨있는 값을 가져오는데에 사용함. 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	string a = "Juyeon";
	string *b = &a;
	cout << b << '\n';
	cout << *b << '\n';
	return 0;
}
