// ��ø for��
// ����

#include <bits/stdc++.h>
using namespace std;

int n = 5, a[5] = {1,2,3,4,5};

 int main(){
 	vector<int> b;
 	
 	for(int i = 0; i < n; i++){
 		for(int j = 0; j < i; j++){
 			for(int k = 0; k < j; k++){
 				cout << i << " " << j << " " << k ; 
 				cout << '\n';
			 }
		 }
	 }
	 cout << "-----------------------------------------------\n";
	 
	 for(int i = 0; i < n; i++){
 		for(int j = i+1; j < n; j++){
 			for(int k = j+1; k < n; k++){
 				cout << i << " " << j << " " << k ; 
 				cout << '\n';
			 }
		 }
	 }
	 
	  cout << "if. �ΰ��� �̴� ���?----------------------------\n";
//	  ��ø for���� ������ ������ 
	   for(int i = 0; i < n; i++){
 		for(int j = i+1; j < n; j++){
 			cout << i << " " << j ; 
 				cout << '\n';
		 }
	 }
	 
	 return 0;
 } 
