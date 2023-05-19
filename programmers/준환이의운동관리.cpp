#include<bits/stdc++.h>
using namespace std;

int test_case;
int a[3];
int main(){
	cin >> test_case;
	for(int i = 0; i < test_case; i++){
		int result; 
		fill(&a[0],&a[0]+3,0);
		for(int j = 0; j < 3; j++){
			cin >> a[j];	
		}
		
		if(a[0]>a[2]) result = a[0]-a[2];
		else if(a[0]<=a[2] && a[2]<=a[1]) result = 0;
		else result = -1;
		
		cout << result << "\n";
	}
}
