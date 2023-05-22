//https://www.acmicpc.net/problem/9996

#include<bits/stdc++.h>
using namespace std;


int main() {
	int tc;
	string str, start, end;
	cin >> tc;
	cin >> str;

	int pos = str.find('*');
	start = str.substr(0, pos);
	end = str.substr(pos + 1);

	for (int i = 0; i < tc; i++) {
		string fileName;
		cin >> fileName;

		// 반례를 꼭 생각하자 ! 
		if (start.size() + end.size() > fileName.size()) {
			cout << "NE \n";
		}
		else {
			if ((fileName.substr(0, start.size()) == start) && fileName.substr(fileName.size() - end.size()) == end)
				cout << "DA \n";
			else
				cout << "NE \n";
		}

	}

}

