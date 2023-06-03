#include<bits/stdc++.h>
using namespace std;

int num;
string pwd, ret;
vector<string> numbers;

void checkNum(){
	while(true){
		if(ret.size() && ret.front() == '0') ret.erase(ret.begin());
		else break;
	}
	if(ret.size() == 0) ret = "0";
	numbers.push_back(ret);
	ret = "";
}

bool cmp(string a, string b){
	if(a.size() == b.size()) return a<b;
	return a.size() < b.size();
}
int main(){
	cin >> num;
	for(int i = 0; i < num; i++){
		cin >> pwd;
		ret = "";
		for(int j = 0; j < pwd.size(); j++){
			if(pwd[j] < 65)
				ret += pwd[j];
			else if(ret.size()) checkNum();	
		}
		if(ret.size()) checkNum();
	}
	sort(numbers.begin(),numbers.end(), cmp);
	
	for(int i = 0; i < numbers.size(); i++){
		cout << numbers[i] <<"\n";
	}
}
