/* 
메모리관리 !
- 자바, 파이썬, 자바스크립트는 가지지컬렉터를 통해 변수에 메모리를 할당/해제함
- c, c++은 가비지컬렉터가 없으며, 개발자가 직접 필요한 메모리를 예약/해제하고 포인터 또한 지원함  

포인터 : 메모리의 주소를 담는 타입 
ㄴ 사용하는 경우  
	- 메모리 동적할당
	- 데이터를 복사하지 않고 함수 매개변수로 사용
	- 클래스 및 구조체 연결 
	
int -> int 타입
int * -> int형 포인터 

선언 방법 : <타입> *<변수명> = <해당 타입의 변수의 주소>  
포인터의 크기 : os 마다 달라지나, 해당 환경에서의 모든 포인터 크기는 같음. 
ex. windows 32 bit = 4bytes/ 64 bit = 8bytes 
*/ 

#include<bits/stdc++.h>
using namespace std;

int a = 4;
double b = 4.4; 
int main(){

	int *i = &a; //*는 에스터리스크라고 불림 
	cout << i << '\n';
	cout << sizeof(i) <<'\n';		
	
	double *j = &b;
	cout << j << '\n';
	cout << sizeof(j) <<'\n';	
	
} 
