// 띄어쓰기가 잇는 문자열을 기반으로 배열을 만들고 싶을때 사용
// 시간복잡도 O(n)
 
#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter){
	vector<string> ret;
	long long pos = 0;
	string token = "";
	
	while((pos = input.find(delimiter)) != string::npos){
		// 구분자의 position 만큼 input 값에서 잘라서 token에 저장  
		token = input.substr(0, pos);
	
		ret.push_back(token);
		
		// ret에 저장한 값만큼 input에서 삭제 
		// 구분자도 삭제해줘야 하기때문에 delimeter.lenth()도 더함  
		input.erase(0, pos+delimiter.length());
	}
	
	ret.push_back(input);
	return ret;
}
int main(){
	string test = "안녕하세요. 테스트용 문장입니다.";
	vector<string> result = split(test, "문");
	for(string b : result) cout << b << '\n'; 
} 
