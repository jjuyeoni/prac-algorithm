/* 
����Ž�� : ��� ����� ���� Ž��
- ���� or ����+����
(���� 1�� �̸�)

*/

#include<bits/stdc++.h>
using namespace std;
int n, cnt;
const int INF = 1e6;
int main(){
	cin >>  n;
	
	// for ����ϴ� ��� 	 
	for(int i = 2400; i <INF;i++){
		string a = to_string(i);
		if(a.find("2400") != string::npos){
			cnt++;
			if (n == cnt){
				cout << a<< '\n';
				break;
			} 
			cout << cnt << " : " << a << '\n';
		}
	}
	// while ����ϴ� ��� 	 
	int i = 2400;
	while(true){
		string a = to_string(i);
		if(a.find("2400") != string::npos){
			cnt++;
			if (n == cnt){
				cout << a<< '\n';
				break;
			} 
		}
		i++;		
	}
}
 
