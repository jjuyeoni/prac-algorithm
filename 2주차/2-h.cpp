//https://www.acmicpc.net/problem/4659

#include<bits/stdc++.h>
using namespace std;

string s;
int f, cnt1, cnt2;
int main() {
	while(true){
		cin >> s;
		if (s == "end") break;
		f = 0; cnt1 = 0; cnt2 = 0;
		for (int i = 0; i < s.size(); i++) {	
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
				f = 1; cnt1++; 
				cnt2 = 0;
			}
			else {
				cnt2++;
				cnt1=0;
			}
			if (cnt1 == 3 || cnt2 == 3) {
				cout << "<" + s + "> is not acceptable.\n";
				break;
			}
			if (s[i] == s[i + 1]) {
				if (s[i] != 'e' && s[i]!='o') {
					cout << "<" + s + "> is not acceptable.\n";
					break;
				}
			}
			if (i == s.size() - 1) {
				if (f != 1)
					cout << "<" + s + "> is not acceptable.\n";
				else
					cout << "<" + s + "> is acceptable.\n";
			}
		}
	}
}
