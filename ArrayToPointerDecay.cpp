/*
Array to Pointer decay
배열의 이름은 주소값으로 쓰일 수 있다!

int a[N] 인 경우 int *c = a 라고 할당할 수 있음. 
how ? int a[N] 을 선언할 경우, a에 해당 배열의 첫번째 주소가 binding 됨.

vector 은 사용 불가
int , double 과 같은 정적배열만 사용 가능.
 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] = {1,2,3,4,5};
	int *c = a;
	
	cout << c << "와" << &a[0] << "는 같은 값을 의미한다.\n";
	cout << c+1 << "와" << &a[1] << "는 같은 값을 의미한다.\n";
}
