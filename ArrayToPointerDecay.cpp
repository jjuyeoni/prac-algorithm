/*
Array to Pointer decay
�迭�� �̸��� �ּҰ����� ���� �� �ִ�!

int a[N] �� ��� int *c = a ��� �Ҵ��� �� ����. 
how ? int a[N] �� ������ ���, a�� �ش� �迭�� ù��° �ּҰ� binding ��.

vector �� ��� �Ұ�
int , double �� ���� �����迭�� ��� ����.
 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[] = {1,2,3,4,5};
	int *c = a;
	
	cout << c << "��" << &a[0] << "�� ���� ���� �ǹ��Ѵ�.\n";
	cout << c+1 << "��" << &a[1] << "�� ���� ���� �ǹ��Ѵ�.\n";
}
