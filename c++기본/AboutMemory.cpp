/* 
메모리는 16진수로 이루어진 주소를 갖음, 하나당 1byte
if. integer 미지수를 선언해서 저장할 경우 -> 메모리는 4개의 공간을 예약.
int에 값이 들어갈 경우 예약한 공간에 값을 할당함.
이 변수의 주소는 사용하는 메모리 첫번째 공간의 주소를 return 함 
*/

#include<bits/stdc++.h>
using namespace std;

int i;
int main(){
	cout << &i << '\n';
	i = 0;
	cout << &i << '\n';
} 
