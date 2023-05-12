// ���Ⱑ �մ� ���ڿ��� ������� �迭�� ����� ������ ���
// �ð����⵵ O(n)
 
#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter){
	vector<string> ret;
	long long pos = 0;
	string token = "";
	
	while((pos = input.find(delimiter)) != string::npos){
		// �������� position ��ŭ input ������ �߶� token�� ����  
		token = input.substr(0, pos);
	
		ret.push_back(token);
		
		// ret�� ������ ����ŭ input���� ���� 
		// �����ڵ� ��������� �ϱ⶧���� delimeter.lenth()�� ����  
		input.erase(0, pos+delimiter.length());
	}
	
	ret.push_back(input);
	return ret;
}
int main(){
	string test = "�ȳ��ϼ���. �׽�Ʈ�� �����Դϴ�.";
	vector<string> result = split(test, "��");
	for(string b : result) cout << b << '\n'; 
} 
